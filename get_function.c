#include "main.h"
/**
 * get_funcction - check the code
 * @s: char
 * Return: null
 */
int (*get_function(char s))(va_list)
{
	get_func funcs[] = {
		{'c', p_char},
		{'s', p_string},
		{'%', p_percent},
		{'\0', NULL}};

	int i = 0;

	while (funcs[i].func != '\0')
	{
		if (s == funcs[i].func)
			return (funcs[i].function);
		i++;
	}

	return (NULL);
}