#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);
/**
 * add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: sum
*/
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: difference
*/
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: product
*/
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: quotient
 */
int div(int a, int b)
{
	return (a / b);
}
/**
 * mod - returns the remainder of the division of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder
 */
int mod(int a, int b)
{
	return (a % b);
}
