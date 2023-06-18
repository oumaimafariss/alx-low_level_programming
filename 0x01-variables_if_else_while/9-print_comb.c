#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return:  0.
*/
int main(void)
{
	int nb;

	for (nb = 0; nb < 10; nb++)
	{
		putchar((nb % 10) + '0');
		if (nb == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
