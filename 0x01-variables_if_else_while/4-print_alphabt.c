#include <stdio.h>

/**
 * main - Prints alphabets except for q and e
 * followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch;
		}
		else
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
