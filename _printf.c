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
    int i, count = 0;
    va_list varg;
    type_f array[] = {
        {"s", print_string},
        {"c", print_char},
        {"d", print_integer},
        {"i", print_integer},
        {'\0', NULL}
    }
}