#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords
 * Return: zero
 */
int main(void)
{
	int num;
	char a;

	srand(time(NULL));
	while (num <= 2645)
	{
		a = rand() % 128;
		num += a;
		putchar(a);
	}
	putchar(2772 - num);
	return (0);
}
