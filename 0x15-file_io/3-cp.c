#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - function to allocate 1024 bytes for a buffer
 * @file: name of the file buffer to store chars
 * Return: pointer to the new allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}
/**
 * close_file - function to close file descriptors
 * @fd: file descriptor tobe closed
 */

void close_file(int fd)
{
	int cp;

	cp = close(fd);

	if (cp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function to Copy the contents of file to another file
 * @argc: number of args supplied to the program
 * @argv: array of pointers to the args
 *
 * Return: 0 on success.
 *
 * Description: correct argument-exit cod 97,
 *              does not exist exit code 98,
 *              cannot be created exit code 99,
 *              cannot be closed exit code 100
 */

int main(int argc, char *argv[])
{
	int from, to, re, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	re = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);


	do {
		if (from == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(to, buffer, re);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		re = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (re > 0);

	free(buffer);
	close_file(from);
	close_file(to);


	return (0);
}
