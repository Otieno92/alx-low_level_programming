#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: variable
 * Return: return s
 */
int _strlen(char *s)
{
	int y = 0;

	while (*(s + y))
	{
		y++;
	}
	return (y);
}
