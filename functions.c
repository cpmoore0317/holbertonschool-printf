#include "main.h"
/**
 * print_edge - Prints special characters such as '%' and '!'
 * @e: Character after the %
 * Return: Returns number based on input
 */
int print_edge(char e)
{
	if (e == '\0')
		return (-1);
	else if (e == '%')
	{
		_putchar('%');
		return (1);
	}
	else
	{
		_putchar('%');
		_putchar(e);
		return (2);
	}
	return (0);
}

/**
 * print_char - Prints a character to the output
 * @varg: Arguments used in the function
 * Return: Returns a count to the main function
 */
int print_char(va_list varg)
{
	char c = va_arg(varg, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - Prints a string to the output
 * @varg: Arguments used in function
 * Return: Returns a count to the main function
 */
int print_string(va_list varg)
{
	char *str = va_arg(varg, char *);
	int i = 0, count = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i])
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}

/**
 * print_integer - Prints a string to the output
 * @varg: Arguments used in function
 * Return: Returns a count to the main function
 */
int print_integer(va_list varg)
{
	long int num = va_arg(varg, long int);
	int x = 1, temp, count = 0;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}

	while ((num / x) > 10) /*Gets x to the highest number needed*/
		x *= 10;

	for (; x >= 1; x /= 10) /*Makes x divide by 10 per loop*/
	{
		temp = (num / x); /*Make temp equal current first number on int*/
		_putchar(temp + 48); /*Print first number on int*/
		temp *= x; /*Makes temp number to divide by*/
		if (temp != 0) /*If temp equals 0 skips this step*/
		{
			num = num % temp; /*New num is last num removing first number */
		}
		count += 1; /*Adds a count to return*/
		if (x == 1)
		return (count);
	}
	return (count);
}
