#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: input number
 * Return: diagonal
 */
void print_diagonal(int n)
{

	int c, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (c = 1; c <= n; c++)
		{
			for (s = 1; s < c; s++)
			{
				_putchar(' ');
			}
			_putcahr('\\');
			_putchar('\n');
		}
	}
}
