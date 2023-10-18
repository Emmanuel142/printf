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
char _toupper(char c);
void print_unsign(unsigned int n);
void print_binary(unsigned int number);
void print_hex(unsigned int number);
void print_hex_upper(unsigned int number);
void handle_char(va_list args);
void handle_string(va_list args);
void handle_integer(va_list args);
void handle_float(va_list args);
void handle_percent(va_list args);
void handle_hex(va_list args);
void handle_hex_upper(va_list args);
void handle_octal(va_list args);
void handle_pointer(va_list args);
void handle_unsigned(va_list args);
void print_pointer(void **ptr);

#endif
