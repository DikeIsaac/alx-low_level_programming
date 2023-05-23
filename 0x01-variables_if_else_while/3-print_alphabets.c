#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowalpha;
	char upAlpha;

	for (lowalpha = 'a'; lowalpha <= 'z'; lowalpha++)
		putchar(lowalpha);

	for (upAlpha = 'A'; upAlpha <= 'Z'; upAlpha++)
		putchar(upAlpha);

	putchar('\n');

	return (0);
}
