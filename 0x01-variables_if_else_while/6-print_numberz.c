#include <stdio.h>

/**
 * main - Prints single digits from 0 - 10
 * followed by newline
 * only allowed to use putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
