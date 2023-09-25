#include <stdio.h>
/**
 * main - a program that computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */

int main(void)
{
	int sum = 0;

	for (int i = 3; i < 1000; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
	sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
