#include <stdio.h>

/**
 * main - prints name
 * @argc:int
 * @argv:char*
 * Return:always 0
 */

int main(int argc, char *argv[])
{
	argc++;
	printf("%s\n", argv[0]);

	return (0);
}
