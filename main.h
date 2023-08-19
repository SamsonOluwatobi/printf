#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_number(int num);
int digit_count(int n);

#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
void _puts(char *str);
void print_unsignedint(unsigned int num);
void print_octal(unsigned int num);
void print_hex(unsigned int num);
void print_HEX(unsigned int num);
void print_binary(unsigned int num);


#endif
