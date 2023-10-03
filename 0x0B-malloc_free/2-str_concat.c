#include "main.h"

/**
 *str_concat - concatenate two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to the most recent allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int i;
	char *display;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	display = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (display == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		display[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		display[s1len + i] = s2[i];
	return (display);
}
