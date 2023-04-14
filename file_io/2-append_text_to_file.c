#include "main.h"
/**
 * append_text_to_file - function that adds
 * text to a file
 * @filename: name of file to append
 * @text_content: string to be added in file
 * Return: 1. Success -1. Failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, text_write_des;
	char *buffer;

	if (text_content)
		text_write_des = strlen(text_content);


	buffer = malloc(sizeof(char) * text_write_des);

	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_WRONLY | O_APPEND);

	if (!buffer)
		return (-1);

	write(file_des, text_content, text_write_des);

	if (file_des == -1)
		return (-1);

	close(file_des);
	free(buffer);

	return (1);
}
