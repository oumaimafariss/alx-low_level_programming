#include <stdio.h>

/**
 * main - prints all sigle digit numbers of base 10 starting from 0
 *
 * Return:  0.
*/
int main(void)
{
	int nb;

	for (nb = 0; nb < 10; nb++)
		printf("%d", nb);
	printf("\n");

	return (0);
}
