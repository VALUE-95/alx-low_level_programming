#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *main - function to print programmme name
 *@c - argument count
 *@v - argument value
 *return: 0
 */

int main(int __attribute__(unused) c, char *v[])
{
	(void) c;

	printf("%s \n", v[0]);
	return (0);
}

