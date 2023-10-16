#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFERSIZE 1024

int _puts(const char *string);
void print_number(int n);
int _printf(const char *format, ...);
void flush_buffer(void);
void _putchar(char c);
void print_unsign(unsigned int n);


char output_buffer[BUFFERSIZE];
int bufer_index = 0;

#endif
