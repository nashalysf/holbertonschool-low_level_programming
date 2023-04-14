#include "main.h"
/**
 * create_file - function that creates
 * a file
 * @filename: name of new file
 * @text_content: string to be added in file
 * Return: 1. Success -1. Failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_des, text_write_des;
	char *buffer;

	if (text_content)
		text_write_des = strlen(text_content);


	buffer = malloc(sizeof(char) * text_write_des);

	if (!filename)
		return (-1);

	file_des = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (!buffer)
		return (-1);

	write(file_des, text_content, text_write_des);


	close(file_des);
	free(buffer);

	return (1);
}
