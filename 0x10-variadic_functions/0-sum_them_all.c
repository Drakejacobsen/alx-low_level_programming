#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: n args
 * Return: sum or if n == 0, return 0
 */
int sum them all(const unsigned int n, ...)
{
	itn sum = 0;
	unsigned int i;
	va_list arguments;

	if (n)
	{
		va_start(arguments, n);
		for (i = 0; i < n; i++)
		{
			sim += va_arg(arguments, int);
		}
		va_end(arguments);
	}
	return (sum);
}
