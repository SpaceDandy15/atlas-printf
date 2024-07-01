#include "main.h"
#include <unistd.h> /* Include for write function */

/**
 * print_char - Print a single character
 * @args: va_list containing the character to print
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
    char c = va_arg(args, int);
    return write(1, &c, 1);
}

/**
 * print_str - Print a string of characters
 * @args: va_list containing the string to print
 * Return: Number of characters printed
 */
int print_str(va_list args)
{
    char *str = va_arg(args, char *);
    int len = 0;
    if (!str)
        str = "(null)";
    while (str[len])
        len++;
    return write(1, str, len);
}

/**
 * print_pct - Print a percent sign '%'
 * @args: va_list (unused)
 * Return: Always returns 1 (the number of characters printed)
 */
int print_pct(va_list args)
{
    (void)args;
    return write(1, "%", 1);
}

/**
 * print_dec - Print a decimal number
 * @args: va_list containing the integer to print
 * Return: Number of characters printed
 */
int print_dec(va_list args)
{
    int num = va_arg(args, int);
    int count = 0;
    if (num < 0)
    {
        count += write(1, "-", 1);
        num = -num;
    }
    if (num / 10)
        count += print_dec(num / 10);
    count += write(1, &"0123456789"[num % 10], 1);
    return count;
}

