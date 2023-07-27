#include <stdio.h>
/**
 * print_befor_main - function
 * desciription: print function befor main
 * Return: void
 */
void __attribute__((constructor))print_before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
