#ifndef _PRINTF_FUNCTIONS_
#define _PRINTF_FUNCTIONS_
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct func
{
	char func;
	int (*function)(va_list);
} get_func;

int _putchar(char c);
int (*get_function(char s))(va_list);
int p_char(va_list args);
int p_percent(va_list);
int p_string(va_list args);
int _printf(const char *format, ...);

#endif