#ifndef MAIN_H
#define MAIN_H

#include <stdard.h>
#include <unistd.h>
#include <stdio.h>

typedef struct form
{
	char type;
	void (*f)(va_list);
} type_f;

/* Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);

#endif /* MAIN_H */
