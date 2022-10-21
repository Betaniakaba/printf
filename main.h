#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/* Function to print non printable characters */
int print_non_printable(va_list types, char buffer[],
			int flags, int width, int precision, int size);

/* Function to print memory address */
int print_pointer(va_list types, char buffer[],
			int flags, int width, int precision, int size);

/* Functions to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
/*Function to print string in reverse*/
int print_reverse(va_list types, char buffer[],
			int flags, int width, int precision, int size);

/*Function to print a string in rot 13*/
int print_rot13string(va_list types, char buffer[],
			int flags, int width, int precision, int size);


int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list c);
int print_string(va_list s);
int print_percent(void);
int print_decimal(va_list d);
int print_integer(va_list i);
int print_unsig(va_list u);
int print_octal(va_list o);
int print_binary(va_list b);
int print_hex(unsigned int n, unsigned int c);
int print_x(va_list x);
int print_X(va_list X);
int print_reverse(va_list r);
int print_rot13(va_list R);

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
