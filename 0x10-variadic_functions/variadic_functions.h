#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
/**
*formats - Typedef struct formats
*struct formats - format to type print
*@index: index to type
*@func: pointer to function - function print
*/
typedef struct formats
{
char *index;
void (*func)(va_list valist);
} formats;
#endif /* VARIADIC_FUNCTIONS_H */
