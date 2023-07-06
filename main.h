#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

typedef struct form
{
	char type;
	int (*f)(va_list);
} type_f;

/* Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);

#endif /* MAIN_H */
