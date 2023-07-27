#include <stdio.h>
void print_before_main() __attribute__((constructor));
/**
 * print_befor_main - function
 * desciription: print function befor main
 * Return: void
 */
void print_before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
