#include "main.h"
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	va_list list_of_args;
	int i = 0;
	int byte = 0;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(list_of_args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			byte++;
			_putchar(format[i]);
		}

		else
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (((*get_function(format[i + 1]))(list_of_args)) != 0)
			{
				byte += ((*get_function(format[i + 1]))(list_of_args));
			}
		}
	}

	return (byte);
	va_end(list_of_args);
}
