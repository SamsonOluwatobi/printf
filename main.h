#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>

#define NON(x) (void)(x)
#define BUFF_SIZE 1024

/**
 * struct formatMap - struct operation
 * @formatMap: This will store the format character
 * @handler: This will store the function to call to handle that format
 */
struct formatMap
{
	char formatMap;
	int (*handler)(va_list, char[]);
};

/**
 * typedef struct formatMap format_Map - typedef struct operation
 * @formatMap: refers to the struct format_Map type
 * @format_Map: refers to the second member of
 * struct format_Map, which is the function pointer
 */
typedef struct formatMap format_Map;

int _printf(const char *format, ...);
int format_output(const char *formatMap,
		int *index, va_list args, char Buffer[]);

int format_char(char c, char Buffer[]);
int format_number(int neg, int index, char Buffer[]);
int format_num(int index, char Buffer[], int len, char _ch);
int format_unsgn(int index, char Buffer[]);
int format_pointer(int index, char Buffer[], char _ch);
int format_output(const char *formatMap,
		int *index, va_list ls, char Buffer[]);


int _printchar(va_list args, char Buffer[]);
int _printstring(va_list args, char Buffer[]);
int _printpercent(va_list args, char Buffer[]);
int _printint(va_list args, char Buffer[]);
int _printbinary(va_list args, char Buffer[]);
int _printunsigned(va_list args, char Buffer[]);
int _printoctal(va_list args, char Buffer[]);
int _printhex(va_list args, char Buffer[], char hexchars[]);
int _printhexlow(va_list args, char Buffer[]);
int _printhexupper(va_list args, char Buffer[]);
int _printunprintable(va_list args, char Buffer[]);
int _printpointer(va_list args, char Buffer[]);


int _printable(char c);
int _apphex(char ac, char Buffer[], int i);

#endif
