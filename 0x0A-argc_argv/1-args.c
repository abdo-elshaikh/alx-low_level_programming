#include <stdio.h>
/**
 * main - main block
 * @argc: offset count
 * @argv: offset value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
