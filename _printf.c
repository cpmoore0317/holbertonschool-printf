#include "main.h"

/**
 * printf - This function prints char by char and input variables at specified place
 *
 * @format: This is the input information into printf, starts and ends with ""
 *
 * Return: Returns a count of how many chars were used.
 */

int _printf(const char *format, ...)
{
    int j, c, i = 0, count = 0;
    va_list varg;
    type_f array[] = {
        {'s', print_string},
        {'c', print_char},
        {'d', print_integer},
        {'i', print_integer},
        {'\0', NULL}
    };

    va_start(varg, format);
    while (format && format[i])
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
		    count++;
	    }
    }
    va_end(varg);
	_putchar('\n');
    return (count);
}
