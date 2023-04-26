#include "main.h"
/**
 * _puts_recursion - Write a function that prints a string, followed by a new line.
 *
 * @s: string
 * Return: 0
 */
void _puts_recursion(char *s)
{
	int i=0;

	if (s[i])
		_putchar('\n);
	else
	{
	_putchar(s);
	_puts_recursion(s++);
	}
}
