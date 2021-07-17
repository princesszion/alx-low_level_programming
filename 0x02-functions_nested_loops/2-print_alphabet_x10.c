#include "holberton.h"
/**
*print_alphabet_x10 - prints alphabets x10
*Return: void
*/
void print_alphabet_x10(void)
{
int i;
for (i = 1; i < 11; i++)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
