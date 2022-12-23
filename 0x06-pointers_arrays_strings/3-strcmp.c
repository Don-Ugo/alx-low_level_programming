#include "main.h"
/**
 * _strcmp - compares two strings and returns and integer
 * depending on the outcome of the comparison
 *
 * @s1: the first string to be compared
 * @s2: the second string to be compared with s1
 *
 * Return: an integer (-1, 0 or 1)
 */
int _strcmp(char *s1, char *s2)
{
int x;
x = 0;
while (s1[x] != '\0' && s2[x] != '\0')
{
if (s1[x] != s2[x])
}
{
return (s1[x] - s2[x]);
}
i++;
}
return (0);


