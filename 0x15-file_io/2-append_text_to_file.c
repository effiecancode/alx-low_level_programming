#include "main.h"

/**
 * append_text_to_file - function to append text at the end of a file
 * @filename: pointer to name of the file
 * @text_content: text to be appended at the end of the file
 * Return: on function failure -1 on success 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, length);


	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
