#include "main.h"

/**
 * _printf - Custom printf function implementation.
 * @format: Format string.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format != '%')
        {
            printed_chars += _putchar(*format);
        }
        else
        {
            format++;
            if (*format == '\0')
                return (-1); /* Handle malformed format string*/

            if (get_func(format))
                printed_chars += get_func(format)(args);
            else
                printed_chars += _putchar('%') + _putchar(*format);
        }
        format++;
    }

    va_end(args);
    return (printed_chars);
}

/**
 * _putchar - Custom putchar function.
 * @c: Character to print.
 * Return: Always 1 (Success).
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * get_func - Get function associated with format specifier.
 * @format: Format specifier string.
 * Return: Pointer to function, or NULL if not found.
 */
int (*get_func(const char *format))(va_list)
{
    int i;
    func_t func[] = {
        {"c", print_char},
        {"s", print_str},
        {"d", print_dec},
        {"i", print_dec},
        {"%", print_pct},
        {NULL, NULL}};

    for (i = 0; func[i].t; i++)
        if (strcmp(func[i].t, format) == 0)
            return func[i].f;

    return NULL;
}

/**
 * print_char - Print character.
 * @args: Argument list.
 * Return: Number of characters printed.
 */
int print_char(va_list args)
{
    return _putchar(va_arg(args, int));
}

/**
 * print_str - Print string.
 * @args: Argument list.
 * Return: Number of characters printed.
 */
int print_str(va_list args)
{
    char *str = va_arg(args, char *);
    int count = 0;

    if (!str)
        str = "(null)";

    while (*str)
    {
        _putchar(*str);
        str++;
        count++;
    }

    return count;
}

/**
 * print_dec - Print decimal number.
 * @args: Argument list.
 * Return: Number of characters printed.
 */
int print_dec(va_list args)
{
    int n = va_arg(args, int);
    int div = 1, count = 0;

    if (n < 0)
    {
        count += _putchar('-');
        div *= -10;
    }

    while (n / div)
    {
        div *= 10;
    }

    while (div != 1)
    {
        div /= 10;
        count += _putchar((n / div) % 10 + '0');
    }

    return count;
}

/**
 * print_pct - Print percent sign.
 * @args: Argument list (unused).
 * Return: Always 1.
 */
int print_pct(va_list args)
{
    (void)args; /* Suppress unused parameter warning*/
    return _putchar('%');
}

