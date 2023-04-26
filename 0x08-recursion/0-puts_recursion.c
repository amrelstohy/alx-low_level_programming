#include "main.h"
/**
 * main - Write a function that prints a string, followed by a new line.
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	int i=0, x=0;

	while (s[i])
		i++;
	_putchar(s[x]);
	return (s[x++]);
}
