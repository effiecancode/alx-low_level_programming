#include "main.h"

/**
 * _isalpha - checks whether character is alphabetic
 * @c: character to be checked.
 * Return: 1 if the character is an English character, 0 if not.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
