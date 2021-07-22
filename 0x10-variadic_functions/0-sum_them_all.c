#include "veriadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - returns the sum of all its parameters.
*@n: size
*@res:result
*Return: adding
*/
int sum_them_all(const unsigned int n, ...)
{
int i, res = 0;
va_list nums;
if (n == 0)
return (res);
va_start(nums, n);
for (i = 0; i < n; i++)
res += va_arg(nums, int);
return (res);
}
