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
    int j, i = 0, count = 0;
	char letter;
    va_list varg;
    type_f array[] = {
        {'s', print_string},
        {'c', print_char},
        {'d', print_integer},
        {'i', print_integer},
        {'\0', NULL}
    };

    va_start(varg, format);
    while (format && format[i]) /*While function exists and not at '\0'*/
    {
		letter = (format[i]);
	    if (letter == '%') /*If percent sign*/
	    {
		    i++; /*Go to next char to check function type*/
		    for (j = 0; array[j].type != '\0'; j++) /*Check char against array.type*/
		    {
			    if (format[i] == array[j].type) /*When letter after % = array.type*/
					count += array[j].f(varg); /*Do function of that type*/
				    /*count += c;*/ /*Add to count of chars printed*/
		    }
		    i++; /*Iterate to next char in loop*/
		}
	    else
	    {
		    _putchar(format[i]); /* Write the regular char */
		    i++; /*Iterate to next char in loop*/
		    count++; /*Add to count of chars printed*/
	    }
    }
    va_end(varg);
    return (count); /*Returns count of total chars printed*/
}
