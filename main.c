#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int ui;


	ui = (unsigned int)INT_MAX + 1024;

    _printf("Let's try to printf a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("%b\n", 98);
    _printf("Percent:[%%]\n", 56);
    printf("Percent:[%%]\n", 56);
    _printf("uni: %u\n", ui);
    printf("uni: %u\n", ui);
    _printf("oni: %o\n", ui);
    printf("oni: %o\n", ui);
    _printf("xni: %x\n", ui);
    printf("xni: %x\n", ui);
    _printf("Xni: %X\n", ui);
    printf("Xni: %X\n", ui);



    return (0);
}
