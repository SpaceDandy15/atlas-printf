This is a repository containing _printf() function with a manual to use it
I will be adding more later explaining the files used to create this


*Insert file description here*
Main.h: contains prototypes, headers, and structures.
dec_print.c: is a function that is used for printing decimal and integers. 
get_printf_data.: printf calls this function is used to check for conversion specifiers with a % character.
_printf: this function will return the characters written within. With -1 if null, using a formatted string.
In other words ordinary characters are copied and unchanged to output. (excluding %)
Because each conversion specfier starts with % character. 
