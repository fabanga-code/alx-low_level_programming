#include <stdio.h>

/**
 * main - function prints the numbes from 1-100, but for multiples of three,
 * fizz is printed instead of the num, for multiples of five,
 * buzz, and for multiples of both threee and five, fizzbuzz.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("fizzbuzz");

		else if ((num % 3) == 0)
			printf("fizz");

		else if ((num % 5) == 0)
			printf("buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
