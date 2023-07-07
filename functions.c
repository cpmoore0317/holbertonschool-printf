#include "main.h"

/**
 * print_char - Prints a character to the output
 * @varg: Arguments used in the function
 * Return: Returns a count to the main function
 */
int print_char(va_list d)
{
    char c = va_arg(d, int);

    putchar(c);
    return(1);
}

/**
 * print_string - Prints a string to the output
 * @varg: Arguments used in function
 * Returns a count to the main function
 */
 int print_string(va_list varg)
 {
    char *str = va_arg(varg, char *);
    int i = 0, count = 0;

    while (str[i])
    {
        putchar(str[i]);
        i++;
        count++:
    }
    return(0);
 }

/**
 * print_integer - Prints a string to the output
 * @varg: Arguments used in function
 * Returns a count to the main function
 */
 int print_integer(va_list varg)
 {
    long int num = va_arg(varg, long int);
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
    return (count);
 }
