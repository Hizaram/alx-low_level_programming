#include "main.h"

/**
 * _strlen - returns length of an inputed string
 * @s: string (const)
 * Return: length of string
 */

int _strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * power - exponential conversions
 * @base: base
 * @exp: exponent
 * Return: result (int)
 */

int power(int base, int exp)
{
	int i, num;

	num = 1;
	for (i = 0; i < exp; ++i)
		num *= base;

	return (num);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int len, i;

	sum = 0;
	if (b == NULL)
		return (sum);
	length = _strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0') * power(2, len - i - 1);
	}
	return (sum);
}
