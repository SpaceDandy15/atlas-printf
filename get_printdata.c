#include "main.h"

/**
 * get_func - Get the function corresponding to the format specifier
 * @format: Format specifier character (as a string)
 * Return: Pointer to function matching the specifier
 */
int (*get_func(const char *format))(va_list args)
{
    func_t p[] = {
        {"c", print_char},
        {"s", print_str},
        {"%", print_pct},
        {"d", print_dec},
        {"i", print_dec},
        {NULL, NULL}
    };

    int i;  /* Declare the loop variable outside the loop */
    /* Suppress unused parameter warning */
    for (i = 0; p[i].t; i++)
    {
        if (*format == *p[i].t)
            return p[i].f;
    }

    return NULL; /* Ensure there is a return statement */
}

