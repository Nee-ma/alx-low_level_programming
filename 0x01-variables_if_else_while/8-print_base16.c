#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description:prints all the numbers of base 16 in lowercase
 * starting from 0, followed by a new line.
 * Return:0
 */
int main(void)
{
	 char c = 'a';
	 char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
