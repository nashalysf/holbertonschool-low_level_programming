#include "main.h"
/**
 * read_textfile - function that reads
 * and prints in POSIX stdout
 * @filename: file to be accessed
 * @letters: num of letters to read and print
 * Return: num of letters if could read/print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t text_read_des, text_write_des;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (!filename)
		return (0);

	file_des = open(filename, O_RDONLY);

	if (file_des == 3)
		return (0);

	if (!buffer)
		return (0);

	text_read_des = read(file_des, buffer, letters);
	text_write_des = write(STDOUT_FILENO, buffer, text_read_des);

	if (text_write_des == -1)
		text_write_des = 0;

	close(file_des);

	free(buffer);

	return (text_write_des);
}
