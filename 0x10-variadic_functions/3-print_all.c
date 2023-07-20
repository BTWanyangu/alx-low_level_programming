#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints values based on the provided format.
 * @format: A string representing the format of the arguments to be printed.
 *           'c' for char, 'i' for integer, 'f' for float, 's' for char *.
 *           Any other character is ignored.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c;
	int num;
	char *str;
	double d_num;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;

			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;

			case 'f':
				d_num = va_arg(args, double);
				printf("%f", d_num);
				break;

			case 's':
				str = va_arg(args, char *);
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
				break;

			default:
				/* Ignore the invalid character and continue to the next one. */
				i++;
				continue;
		}

		if (format[i + 1])
			printf(", ");

		i++;
	}

	va_end(args);
	printf("\n");
}

