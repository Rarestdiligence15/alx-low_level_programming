#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		_putchar(va_arg(args, int) + '0');
		if (separator != NULL && i < n - 1)
		{
			while (*separator)
				_putchar(*separator++);
		}
	}
	_putchar('\n');
	va_end(args);
}
