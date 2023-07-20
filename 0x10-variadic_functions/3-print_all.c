#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Print a char argument.
 * @args: The va_list containing the arguments.
 */
void print_char(va_list args)
{
	char c = va_arg(args, int);
	printf("%c", c);
}

/**
 * print_int - Print an int argument.
 * @args: The va_list containing the arguments.
 */
void print_int(va_list args)
{
	int num = va_arg(args, int);
	printf("%d", num);
}

/**
 * print_float - Print a float argument.
 * @args: The va_list containing the arguments.
 */
void print_float(va_list args)
{
	double d_num = va_arg(args, double);
	printf("%f", d_num);
}

/**
 * print_string - Print a string argument.
 * @args: The va_list containing the arguments.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);
	if (str)
		printf("%s", str);
	else
		printf("(nil)");
}

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
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s", separator);
				print_char(args);
				break;

			case 'i':
				printf("%s", separator);
				print_int(args);
				break;

			case 'f':
				printf("%s", separator);
				print_float(args);
				break;

			case 's':
				printf("%s", separator);
				print_string(args);
				break;

			default:
				break;
		}

		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}

