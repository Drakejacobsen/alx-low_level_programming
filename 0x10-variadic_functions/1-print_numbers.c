#include "variadic_fuuncitons.h"
#include <stdio.h>
#include <stadrg.h>
/**
 * print_numbers - prints numebrs & new line at the end.
 * @separator: string
 * @n: number of elements
 * Return: void
 */
void print_numbers(const char *separator, comst unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(ap);
}
