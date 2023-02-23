#include "main.h"

/**
 * _islower - checks is character is lowercase
 * @c - is the character being checked
 * Return: 1 if lowercase is true
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
