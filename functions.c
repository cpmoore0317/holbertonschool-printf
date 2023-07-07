#include "main.h"

/**
 * print_char - Prints a character to the output
 * @varg: Arguments used in the function
 * Return: Returns a count to the main function
 */
int print_char(va_list varg)
{
}

/**
 * print_string - Prints a string to the output
 * @varg: Arguments used in function
 * Returns a count to the main function
 */
 int print_string(va_list varg)
 {
 }

/**
 * print_integer - Prints a string to the output
 * @varg: Arguments used in function
 * Returns a count to the main function
 */
 int print_integer(va_list varg)
 {
    int num = varg;
    int x = 1, temp, count = 0;

    while ((num / x) > 10 )
    {
    x *= 10;
    }
    for (; x >= 1; x /= 10)
    {
    temp = (num / x);
    putchar(temp + 48);
    temp *= x;
    if (temp != 0)
    {
        num = num % temp;
    }
    count += 1;
    if (x == 1)
        return count;
    }
 }
