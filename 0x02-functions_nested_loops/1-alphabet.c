#include "main.h"

/**
 * print_alphabet - prints all alphabets in lowercase
 *
 * followed by a newline
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
