#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

typedef struct form
{
	char type;
	int (*f)(va_list);
} type_f;

/* Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int print_string(va_list varg);
int print_char(va_list varg);
int print_integer(va_list varg);
int print_edge(char e);

#endif /* MAIN_H */
