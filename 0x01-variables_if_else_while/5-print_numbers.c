#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}

	printf("\n");
	return (0);
}
