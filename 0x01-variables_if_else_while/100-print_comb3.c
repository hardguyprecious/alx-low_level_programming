#include <stdio.h>

/**
 * main - Entry point of program to print different combinations of two digits.
 *
 * Return: 0 on success
 */

int main(void)
{
	int n1, n2;

	n1 = '0';
	while (n1 <= '9')
	{
		n2 = '0';
		while (n2 <= '9')
		{
			if (n1 < n2 && n1 != n2)
			{
				putchar(n1);
				putchar(n2);
				if ((n1 + n2) != 113)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
