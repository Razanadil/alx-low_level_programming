#include <stdio.h>

/**
 * main - Entry point
 * Description: prints combination of three digits
 * Return: 0 (success)
 */
int main(void)
{
	int n1,n2,n3;

	for (n1 = 48; n1 <= 56; n1++)
	{
		for (n2 = n1 + 1; n2 <= 57; n2++)
		{

for (n3 = n2+1; n3 <= 57; n3++ )
			putchar((char)n1);
			putchar((char)n2);
putchar((char)n3);
			if (n1 != 56)
			{
				putchar(',');
				putchar(' ');
			}
		
	}
}
		putchar('\n');
		return (0);
}

