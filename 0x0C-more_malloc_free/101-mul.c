#include <stdio.h>
#include <stdlib.h>
/**
 * _multiply - multiply
 * @num1: get num
 * @num2: get num
 * Return: void
 */
void _multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, result_len = 0;
	int i, j, k, mul, pos1, pos2, sum;
	int *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;
	result_len = len1 + len2;
	result = (int *) calloc(result_len, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0');
			pos1 = i + j;
			pos2 = i + j + 1;
			sum = mul + result[pos2];
			result[pos1] += sum / 10;
			result[pos2] = sum % 10;
		}
	}
	k = 0;
	while (k < result_len && result[k] == 0)
		k++;
	if (k == result_len)
		printf("0\n");
	else
	{
		for (; k < result_len; k++)
			printf("%d", result[k]);
		printf("\n");
	}
	free(result);
}
/**
 * validate_input - valid
 * @str: get str
 * Return: intager
 */
int validate_input(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * main - main
 * @argc: get int
 * @argv: get str
 * Return: void
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!validate_input(num1) || !validate_input(num2))
	{
		printf("Error\n");
		return (98);
	}

	_multiply(num1, num2);

	return (0);
}
