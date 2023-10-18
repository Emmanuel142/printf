#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFERSIZE 1024

void print_octal(unsigned int num);
int _puts(const char *string);
void print_number(int n);
int _printf(const char *format, ...);
void flush_buffer(void);
void _putchar(char ch);
void print_unsign(unsigned int n);
void print_binary(unsigned int number);


#endif
