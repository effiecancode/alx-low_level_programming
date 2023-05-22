#include "main.h"

/**
 * _islower - checks whether a character is in lower case
 * Description: checks for lowercase characters in english
 * @c: character test
 * Return: 1 if lowercase, 0 if not lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
