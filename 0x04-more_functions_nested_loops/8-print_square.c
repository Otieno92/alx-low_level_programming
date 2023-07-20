#include "main.h"

void print_square(int size)
{
	int i;
	int j;

	if (size < 0)
	{
		_putchar('\n');
	}

	for (j = 0; j < size; i++)
	{
		for (i = 0; i < size; i++)
		{
		_putchar('#');
		}
	_putchar('\n');
	}
}

