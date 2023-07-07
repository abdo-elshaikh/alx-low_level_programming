#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function
 * @argc: par int
 * @argv: par value
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int num = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(arg);
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
