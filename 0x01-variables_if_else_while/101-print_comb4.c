#include <stdio.h>

/**
 * main - print 3 combination of numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int c, i, k;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; k <= '9'; i++)
		{
			if (c < i && i < k)
			{
				putchar(c);
				putchar(i);
				putchar(k);

				if (c != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

