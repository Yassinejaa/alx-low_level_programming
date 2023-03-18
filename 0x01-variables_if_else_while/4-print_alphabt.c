#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabets except q and e'
 * Return: Always 0
 */
int main(void)
{
	char alp[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
