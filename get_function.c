#include "main.h"
/**
 * get_funcction - check the code
 * @s: char
 * Return: null
 */
int (*get_function(char s))(va_list)
{
	get_func func[] = {
		{'c', p_char},
		{'s', p_string},
		{'%', p_percent},
		{'\0', NULL}};

	int i = 0;

	while (func[i].func != NULL)
	{
		if (s == func[i].func[0])
			return (func[i].func);
		i++;
	}

	return (NULL);
}