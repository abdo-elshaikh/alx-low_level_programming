#include <stdio.h>
/**
 * main - main block
 * Description:finds and prints the largest prime factor of the number
 * Return: void
 */
int main(void)
{
	long int num = 612852475143;
	long int i = 2;

	while (i < num)
	{
		if (num % i == 0)
			num = num / i;
		i++;
	}
	printf("%ld\n", i);
	return (0);
}
