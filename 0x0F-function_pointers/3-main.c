#include "3-calc.h"
/**
 * main - main block
 * @argc: arg count
 * @argv: arg value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char *s;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(s) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(s)(a, b);
	printf("%d\n", result);
	return (0);
}
