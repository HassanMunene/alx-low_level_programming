#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * main -Entry
 *
 * Declaration: 'The program's description'
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;
	int k;
	int m;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for(k = '0'; k <= '9'; k++)
			{
				for(m = '1'; m <= '9'; m++)
				{
					if (i < k && j < m)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(m);
						if (i <= '8')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
