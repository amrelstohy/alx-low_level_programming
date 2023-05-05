#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function
 *
 * @b: variable
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int x, i = 0, z = 0, c = 1;
	unsigned d = 0;
	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		i++;
	}
	for (x = 0; x < i; x++)
	{
		z = z * 10;
		z = z + (b[x] - 48);
	}
	for (x = 0; x <= i; x++)
	{
		d = d + ((z % 10) * c);
		z = z / 10;
		c = c * 2;
	}
	return (d);
}
