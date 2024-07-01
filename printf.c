#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: Character string containing format specifiers.
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
    int count = 0;
    int i;  /* Declare the loop variable outside the loop */
    va_list args;

    va_start(args, format);

    for (i = 0; format && format[i]; i++)
    {
        if (format[i] == '%' && format[i + 1])
        {
            int (*func)(va_list) = get_func(&format[i + 1]); /* Use &format[i + 1] */
            if (func)
            {
                count += func(args);
            }
            else
            {
                _putchar(format[i]);
                count++;
            }
            i++;  /* Skip the format specifier character */
        }
        else
        {
            _putchar(format[i]);
            count++;
        }
    }

    va_end(args);
    return (count);
}

