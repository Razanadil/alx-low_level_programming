#include<stdio.h>
 /**
 * main - Entry point
 * Description: print numbers of base 16   
 * Return: o (success)
 */
int main(void)
{
char n;
for (n = '0'; n <= '9'; n++)
putchar(n);
for (n = 'a'; n <= 'f'; n++)
putchar(n);
putchar('\n');
return (0);
}

