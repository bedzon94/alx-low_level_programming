#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - it all starts here
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0.
 */
int main(int mul, char *num[])
{
	if (mul != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(num[1]) * atoi(num[2]));
	return (98);
}
