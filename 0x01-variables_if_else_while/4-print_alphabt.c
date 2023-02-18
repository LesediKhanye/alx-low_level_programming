#include <stdio.h>

/**
 * main - Prints alphabets except for q and e
 * followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
