#include <stdio.h>

/**
 * main - Prints the number of arguments passed to ot.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char _attribute_((_unused_)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
