#include <stdio.h>

/**
 * main - g
 *
 * Return: zero
 */
int main(void)
{
	int x, var;

	for (var = '0'; var <= '9'; var++)
	{
		for (x = '1'; x <= '9'; x++)
		{
			if (x != var && x > var)
			{
				putchar(var);
				putchar(x);
				if (var == '8' && x == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
