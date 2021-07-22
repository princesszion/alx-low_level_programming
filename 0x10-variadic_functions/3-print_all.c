#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
*func_char - print type char.
*@valist: is a arg type char.
*Return: void
*/
void print_all(const char * const format, ...)
{
int i = 0, j = 0;
char *res;
if (!format)
return;
va_list stuff;
va_start(stuff, format);
while (format && format[i])
{
switch (format[i++])
{
case 'c':
printf("%c", va_arg(stuff, int));
break;
case 'i':
printf("%d", va_arg(stuff, int));
break;
case 'f':
printf("%f", (float)va_arg(stuff, double));
break;
case 's':
res = va_arg(stuff, char *);
if (res == NULL)
res = "(nil)";
printf("%s", res);
break;
default:
continue;
}
if (format[i])
printf(", ");
}
printf("\n");
}
