/********************** myprintf.h*********************/
#ifndef MYPRINTF_H
#define MYPRINTF_H

#include <stdarg.h>
#include <stdio.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
#define F_MINUS 1

int _printf(const char *format, ...);
int handle_write_char(char c, char buffer[], int flags, int width, int precision, int size);
long int convert_size_number(long int n, int size);
int write_number(int is_negative, int i, char buffer[], int flags, int width, int precision, int size);

#endif /* MYPRINTF_H */
