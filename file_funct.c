/* file_funct.c */
#include "main.h"
#include <stdio.h>  /* Include necessary headers */

/**
 * open_file - Open a file for reading or writing
 * @filename: Name of the file to open
 * @mode: Mode ('r' for read, 'w' for write, etc.)
 * Return: File pointer or NULL on failure
 */
FILE *open_file(const char *filename, const char *mode)
{
    FILE *file = fopen(filename, mode);
    if (file == NULL)
    {
        perror("Error opening file");
    }
    return file;
}

/* Additional utility functions if needed */


