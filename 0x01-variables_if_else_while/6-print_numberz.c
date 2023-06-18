#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 starting from 0
 * only using putchar
 *
 * Return:  0.
*/
int main(void)
{
	int nb;

	for (nb = 0; nb < 10; nb++)
		putchar((nb % 10) + '0');

	putchar('\n');

	return (0);
}
