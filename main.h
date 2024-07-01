#ifndef MAIN_H
#define MAIN_H

/* Standard Libraries */
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

/**
 * struct func_type - type structure
 * @t: format specifier string
 * @f: pointer-function associated with the argument
 */
typedef struct func_type
{
    char *t;
    int (*f)(va_list);
} func_t;

/* Function Prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int print_dec(va_list args);
int print_char(va_list args);
int print_str(va_list args);
int (*get_func(const char *format))(va_list);
int print_pct(va_list args);

#endif /* MAIN_H */

