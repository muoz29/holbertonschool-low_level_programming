#include <stdio.h>
/**
  * main - prints all possible combination of numbers separated by a comma
  *
  * Return: Always (Success);
  */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
