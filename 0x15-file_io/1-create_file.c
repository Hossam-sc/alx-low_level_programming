#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - function will create a file
 * @filename:  name of file to be created
 * @text_content: text to be written in new file
 * Return: function will return 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int length = 0, inlen = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (inlen = 0, ptr = text_content; *ptr; ptr++)
			inlen++;
		length = write(file, text_content, inlen);
	}
	if (close(file) == -1 || inlen != length)
		return (-1);
	return (1);
}
