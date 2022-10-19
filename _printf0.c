#include "main.h"

/**
* find_bet - function that finds a format for printf
*
* @format: format
* Return: The number of characters printed
*/
int (*find_bet(const char *format))(va_list)
{
	unsigned int i = 0;

	func_find find[] = {
	{"c", print_char},
	{"s", print_string},
	{NULL, NULL}
};
	while (find[i].sf)
	{
	if (find[i].sf[0] == (*format))
		return (find[i].f);
	i++;
	}
	return (0);
}

/**
* _printf - function that prints to the stdout
* @format: format (char , string)
* Return: the number of chars printed (excluding the null byte)
*/
int _printf(const char *format, ...)
{
	va_list argp;
	int (*f)(va_list);

	unsigned int i = 0, count = 0;

	if (format == NULL)
		return (1);
	va_start(argp, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		if (format[i] == '\0')
			return (count);
		f = find_bet(&format[i + 1]);
		if (f != NULL)
		{
			count += f(argp);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(argp);
	return (count);
}
