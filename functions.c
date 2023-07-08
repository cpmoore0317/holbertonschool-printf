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

	while ((num / x) > 10)
		x *= 10;

	for (; x >= 1; x /= 10)
	{
		temp = (num / x);
		_putchar(temp + 48);
		temp *= x;
		if (temp != 0)
		{
			num = num % temp;
		}
		count += 1;
		if (x == 1)
			return (count);
	}
	return (count);
}
