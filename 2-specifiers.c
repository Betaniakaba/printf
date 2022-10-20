
#include "main.h"

/**
 *print_decimal - prints decimal numbers to stdout
 *@d: float parameter
 *
 *Return: 0
 */

int print_decimal(va_list d)
{

}

/**
 *print_integer - writes integer to stdout
 *@i: unsigned int argument
 *
 *Return: 0
 */

int print_integer(va_list i)
{

}

/**
 *print_binary - handles conversion to binary and writes to stdout
 *@b: unsigned int argument
 *
 *Return: 0
 */

int print_binary(va_list b)
{
unsigned int c, i = 0, bin;
c = va_arg(b, int);

if (c != 0)
{
while (c[i])
{
c %= 2;
if (c > 1)
c &= 2;
_putchar(c);
i++;
}
}
return (1);
}