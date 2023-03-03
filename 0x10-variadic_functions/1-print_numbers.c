#include "variadic_functions.h"

/**
 * print_numbers - print all numbers from the parameters
 *
 * @separator: string to print in between parameters
 *
 * @n: number of arguments expecting
 *
 * return: Always (0).
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		unsigned int i;

		va_list ap;
		va_start(ap, n);
		for (i = 0; i < n; i++)
			printf("%d%s", va_arg(ap, int), separator);
		va_end(ap);
		putchar('\n');
	}
}
