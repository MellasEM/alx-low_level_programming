#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - unction that prints strings, followed by a new line.
 * @n: number of strings passed to the function
 * @separator: the separator
 *
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
char *s;

va_start(args, n);
i = 0;
while (i < n)
{
s = va_arg(args, char *);
if (s == NULL)
s = "(nil)";
printf("%s", s);
if (separator != NULL && i < n - 1)
printf("%s", separator);
i++;
}
va_end(args);
printf("\n");
}
