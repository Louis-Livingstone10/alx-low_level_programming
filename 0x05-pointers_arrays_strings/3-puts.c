#include "main.h"

/**
 * _puts - puts a string
 * @str: the string to put
 * Return: the length of a string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
