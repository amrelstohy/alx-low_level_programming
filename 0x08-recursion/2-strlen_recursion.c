#include "main.h"
/**
 * _strlen_recursion - function
 *
 * @s: variable
 * Return: len
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
