#include "main.h"

/**
 * _printf - This function prints char by char and input variables at specified place
 * @format: This is the input information into printf, starts and ends with ""
 *
 * Return: Returns a count of how many chars were used.
 */

int _printf(const char *format, ...)
{
	int j, i = 0, count = 0;
	va_list varg;
	type_f array[] = {
		{'s', print_string},
		{'c', print_char},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL}
	};
	
	va_start(varg, format);
	if (format == NULL)
		return(-1);
	for (;format && format[i]; i++) /*While function exists and not at '\0'*/
	{
		if (format[i] == '%') /*If percent sign*/
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++; /*Go to next char to check function type*/
			for (j = 0; format[j] != '\0'; j++) /*Check char against array.type*/
			{
				if (format[i] == array[j].type) /*When letter after % = array.type*/
				{
					count += array[j].f(varg); /*Do function of that type*/
					break;
				}
			}
			if (format[j] == '\0')
				count += print_edge(format[i]);
		}
		else
		{
			_putchar(format[i]); /* Write the regular char */
			count++; /*Add to count of chars printed*/
		}
	}
	va_end(varg);
	return (count); /*Returns count of total chars printed*/
}
