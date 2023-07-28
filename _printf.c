#include "main.h"

/**
 * _printf - print to stout formatted text
 *
 * @format: format specifier
 * Return: no of bytes printed
 *
 */
int _printf(const char *format, ...)
{
	int j, s_counts, count = 0;

	va_list args;

	va_start(args, format);

for (j = 0; format[j] != '\0'; j++)
{
	if (format[j] != '%')
	{
		alx_putchr(format[j]);
	}
	else if (format[j] == '%' && format[j + 1] == 'c')
	{
		alx_putchr(va_arg(args, int));
		j++;
	}
	else if (format[j + 1] == 's')
	{
		s_counts = putss(va_arg(args, char *));
		j++;
		count += (s_counts - 1);
	}
	else if (format[j + 1] == '%')
	{
		alx_putchr('%');
	}
	count += 1;

}
va_end(args);
return (count);
}
