#include "main.h"
/**
 * print_edge - Prints special characters such as '%' and '!'
 * @e: Character after the %
 * Return: Returns number based on input
 */
int print_edge(char e)
{
	if (e == '\0') /*If single %*/
		return (-1);
	else if (e == '%') /*If %%*/
	{
		_putchar('%');
		return (1);
	}
	else
	{
		_putchar('%'); /*If % and other char*/
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

	_putchar(c); /*Print a single char*/
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

	while (str[i])  /*Cycle through string printing letter by letter*/
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
	int num = va_arg(varg, long int);
	int x = 1, temp, count = 0;

	if (num < 0) /*For negative numbers*/
	{
		if (num == INT_MIN) /*Int min scenaria*/
		{
			/*Cant make int min positive, */
			/*because int min is 1 larger than int max, */
			/*must remove a number first*/
			_putchar('-'); /*Print the -*/
			_putchar(2 + 48);  /* Print the 2 in front*/
			num = num % 2000000000; /*Remove the 2 from front*/
			num *= -1; /*Makes it a positive integer under max int to flow thru*/
			count += 2;
		}
		else
		{
			_putchar('-'); /*puts the -*/
			num *= -1; /*Makes integer positive to flow thru normal*/
			count++;
		}
	}
	while ((num / x) > 9) /*Gets x to the highest number needed*/
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
