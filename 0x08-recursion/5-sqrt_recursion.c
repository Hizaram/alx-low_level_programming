#include "main.h"

/**
 * check_int - checks integer as candidate for square root
 * @square: square integer
 * @x: integer
 * Return: 1
 */

int check_int(int square, int x)
{
	if (x * x == square)
		return (x);
	else if (x > square / x)
		return (check_int(square, x - 1));
	else if (x < square / x)
		return (check_int(square, x - 1));
	else
		return (-1);
}
