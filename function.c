#include "main.h"
/**
 * p_string- print string
 * @args:argument
 * Return: string
 */
int p_string(va_list args)
{
	int i;
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		for (i = 0; string[i] != '\0'; i++)
		{
			_putchar(string[i]);
		}

		return (i);
	}
}
/**
 * p_char-print char
 * @args:argument
 * Return:char
 */
int p_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
/**
 * p_integer - prints integer
 * @args: argument to print
 * Return: number of characters
 */
int p_integer(va_list args)
{
	int n = va_arg(args, int);
	int p = 0;
	int divisor = 1;

	if (n < 0)
	{
		p += _putchar('-');
		n = -n;
	}
	while (n >= divisor)
	{
		p += _putchar(n / divisor % 10 + '0');
		divisor *= 10;
	}
	return (p);
}
