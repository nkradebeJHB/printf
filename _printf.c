#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: format string containing the characters.
 * Return: Pointer to valid function or NULL.
 */
static int (*check_for_specifiers(const char *format))(va_list)
{
	unsigned int i;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	for (i = 0; p[i].t != NULL; i++)
	{
		if (*p[i].t == *format)
		{
			break;
		}
	}
	return (p[i].f);
}
/**                                                           
 * _printf - produces output according to a format.
 * @format: format string containing the characters.
 * Return: The count of chars in format
 */  
int _printf(const char *format, ...)
{
}
