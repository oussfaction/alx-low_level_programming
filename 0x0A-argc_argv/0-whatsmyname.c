#include "main.h"
#include <stdio.h>
/**
 * main - prints programe name followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc __attribute__((unused)), char const *argv[])
{
	(void)argc;
	printf("%s\n", *argv);

	return (0);
}
