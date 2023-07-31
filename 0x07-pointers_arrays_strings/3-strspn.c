#include "main.h"
/**
 * _strspn - prints the consecutive caracters of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c, d;

	for (d = 0; *(s + d); d++)
	{
		for (c = 0; *(accept + c); c++)
		{
			if (*(s + d) == *(accept + c))
				break;
		}
	if (*(accept + c) == '\0')
		break;
	}
	return (d);
}
