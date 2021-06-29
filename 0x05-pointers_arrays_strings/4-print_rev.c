#include "holberton.h"

/**
* print_rev - prints a string in reverse
* @s: value to be checked
* Return: void
*/
void print_rev(char *s)
{
int l = 0;
while (s[l] != 0)
l++;
l = l - 1;
while (l >= 0)
{
putchar(s[l]);
l--;
}
putchar('\n');
}
