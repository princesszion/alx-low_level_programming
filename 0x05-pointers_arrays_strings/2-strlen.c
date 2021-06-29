#include "holberton.h"
/**
* _strlen - Returns the length of a string.
* @str: The string to get the length of.
*
* Return: The length of @str.
*/
string_l _strlen(const char *str)
{
string_l length = 0;
while (*str++)
length++;
return (length);
}
