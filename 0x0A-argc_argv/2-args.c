#include <stdio.h>

/**
 * main - This programme prints all arguments if receives
 * @argc: argument count
 * argv: array of strings
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int value;

	for (value = 0; value < argc; value++)
		printf("%s\n", argv[value]);
	return (0);
}
