#include "main.h"

/**
 *print_char - writes character to stdout
 *@c: char parameter
 *
 *Return: 0
 */

int print_char(va_list c)
{
char character;
character = va_arg(c, int);
_putchar(character);
return (0);
}

/**
 *print_percent - % handler
 *
 *Return: 0
 */

int print_percent(void)
{
_putchar('%');
return(0);
}

/**
 *print_string - writes string of characters to stdout
 *@s: char * parameter
 *
 *Return: 0
 */

int print_string(va_list s)
{
char *string;
int b = 0;
 
string = va_arg(s, char *);

while (string[b])
{
_putchar(string[b]);
b++;
}
return (0);
}
