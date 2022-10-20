#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list c);
int print_string(va_list s);
int print_percent(void);
int print_decimal(va_list d);
int print_integer(va_list i);
int print_binary(va_list b);

/**
* struct function_format - Structure Format
*
* @sf: The specifiers
* @f: The function
*/
typedef struct function_format
{
	char *sf;
	int (*f)(va_list);
} func_find;

#endif
