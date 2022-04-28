#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: integer
 * @index: index to set 1
 * Return: integer (1 success, -1 error)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int repl;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	repl = 1;
	repl = repl << index;
	repl = ~repl;
	*n = *n & repl;

	return (1);
}
