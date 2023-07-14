#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always(Success)
 */
int main(void)
{

int n;

srand(time(0));
n = rand() % RAND_MAX;

if (n > 0)
{
	printf("%d is Positive\n", n);
}
else if (n == 0)
{
	printf("%d is Zero\n", n);
}
else
{
	printf("%d is Negative\n", n);
}
/* your code goes there */
return (0);
}
