#include "main.h"

/**
 * print_square - function that prints a square
 * @size: size of both width and length
 * Return: square made of '#'
 */
void print_square(int size)
{

	int c, r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= size; c++)
		{
			_putchar('#');

			for (r = 2; r <= size; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
