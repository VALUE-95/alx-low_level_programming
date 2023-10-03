#include "main.h"

/**
 *_strdup - copies strings to allocated space in memory
 *@str: string to copy to new memory
 *
 *Return: pointer to the new memory
 */

char *_strdup(char *str)
{
	int i;
	char *emulate;
	int num = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		num++;
	emulate = malloc(sizeof(char) * num + 1);

	if (emulate == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		emulate[i] = str[i];
	return (emulate);
}
