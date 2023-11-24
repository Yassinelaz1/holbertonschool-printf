#include "main.h"
/**
 *_printf-function that do printf
 *@format:arguments
 *Return:number of byte
 */
int _printf(const char *format, ...)
{
	va_list list_of_args;
	unsigned int i = 0;
	unsigned int byte = 0;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(list_of_args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				byte++;
				i++;
			}
			else if (get_function(format[i + 1]) != NULL)
			{
				byte += ((get_function(format[i + 1]))(list_of_args));
				i++;
			}
			else
			{
				_putchar(format[i]);
				byte++;
			}
		}
		else
		{
			_putchar(format[i]);
			byte++;
		}
	}
	return (byte);
	va_end(list_of_args);
}
