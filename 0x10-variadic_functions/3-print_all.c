#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Print a character.
 * @arg: The argument to print.
 */
void print_char(va_list arg)
{
    printf("%c", va_arg(arg, int));
}

/**
 * print_int - Print an integer.
 * @arg: The argument to print.
 */
void print_int(va_list arg)
{
    printf("%d", va_arg(arg, int));
}

/**
 * print_float - Print a float.
 * @arg: The argument to print.
 */
void print_float(va_list arg)
{
    printf("%f", va_arg(arg, double));
}

/**
 * print_string - Print a string.
 * @arg: The argument to print.
 */
void print_string(va_list arg)
{
    char *str = va_arg(arg, char *);

    if (str == NULL)
    {
        printf("(nil)");
        return;
    }
    printf("%s", str);
}

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *separator = "";

    if (format == NULL)
        return;

    va_start(args, format);

    while (format[i])
    {
        switch (format[i])
        {
        case 'c':
            printf("%s%c", separator, va_arg(args, int));
            break;
        case 'i':
            printf("%s%d", separator, va_arg(args, int));
            break;
        case 'f':
            printf("%s%f", separator, va_arg(args, double));
            break;
        case 's':
            separator = va_arg(args, char *);
            if (separator == NULL)
            {
                printf("(nil)");
                separator = "";
            }
            break;
        default:
            break;
        }
        if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') && format[i + 1])
            separator = ", ";
        i++;
    }
    printf("\n");
    va_end(args);
}

