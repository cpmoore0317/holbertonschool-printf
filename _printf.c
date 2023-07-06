#include "main.h"

int print_string(va_list varg)
{
	return (0);
}

int print_char(va_list varg)
{
	return (0);
}

int print_integer(va_list varg)
{
	return (0);
}

/**
 * printf - This function prints char by char and input variables at specified place
 *
 * @format: This is the input information into printf, starts and ends with ""
 *
 * Return: Returns a count of how many chars were used.
 */

int _printf(const char *format, ...)
{
    int i, j, c, count = 0;
    va_list varg;
    type_f array[] = {
        {'s', print_string},
        {'c', print_char},
        {'d', print_integer},
        {'i', print_integer},
        {'\0', NULL}
    };

    va_start(varg, format);
    while (format && format[i]);
    {
	    if (format[i] == '%')
	    {
		    i++;
		    for (j = 0; array[j].type != '\0'; j++)
		    {
			    if (format[i] == array[j].type)
			    {
				    c = array[j].f(varg);
				    count += c;
			    }
		    }
		    i++;
	    }
	    else
	    {
		    _putchar(format[i]);
		    i++;
	    }
    }
    va_end(varg);
    return (count);
}
