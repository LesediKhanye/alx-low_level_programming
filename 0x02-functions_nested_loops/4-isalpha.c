#include "main.h"

/**
 * _isalpha - checks if character is a letter, and lowercase or uppercase
 *
 * Return: 1 if true 
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
