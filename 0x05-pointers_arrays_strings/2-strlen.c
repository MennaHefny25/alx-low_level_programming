#include "main.h"
/**
 * _strlen - return the length of a string
 * Owned By Bwave
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
	}
	return (length);
}
