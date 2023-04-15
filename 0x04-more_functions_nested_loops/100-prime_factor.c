#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, m = 0;
	long int n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			if (m < i)
				m = i; 
			i = 1;
		}
	}
	printf("%d\n", m);
	return (0);
}
