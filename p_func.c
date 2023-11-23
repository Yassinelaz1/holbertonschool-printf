#include "main.h"
int p_char(va_list args)
{
    char c = va_arg(args, int);

    _putchar(c);
    return (1);
}
int p_percent(va_list args)
{
    char c = va_arg(args, int);

    _putchar(c);
    return (1);
}
int p_string( va_list args)
{
	int byte = 0;
	int i = 0;

	if (args == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i != '/0'; i++)
		{
			_putchar(args[i]);
			byte++;
		}
		return (byte);
	}
}