#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of argument
 * @argv: array of arguments
 * Return: (0)
 */

int main(int argc, _attribute((unused)) char *argv[])
{
	int args = argc - 1;

	printf("%d\n", args);
	return (0);
}
