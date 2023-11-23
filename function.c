#include "main.h"
/**
 * p_string-
 * @args:argument
 */
int p_string(va_list args)
{
	int i;
	char *string = va_arg(args, char *);

	if (args == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i != '\0'; i++)
		{
			_putchar(string[i]);
		}
		return (0);
	}
}
/**
 * p_char-print char
 * @args:argument
 */
int p_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
