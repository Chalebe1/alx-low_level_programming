#include "variadic_functions.h"

/**
 *sum_them_all - sum all arguments in the function
 *
 *Return: Always sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list ap;

	va_start(ap, n);

	sum = 0;
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);

}

