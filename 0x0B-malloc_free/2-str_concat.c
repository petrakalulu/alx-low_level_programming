#include "main.h"
#include <stdio.h>
/**
 * str_concat - gets input end and adds them together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)

{
	char *concat;
	int i, ci;
	if (s1 == NULL)
		s1 = ""
			if (s2 == NULL)
				s2 = ""
					i = ci = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[ci] != '\0')
		ci++
			conct = mallocc(sizeof(char) * (i + ci + 1));
	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[ci] = s2[ci];
			{
			conct[i] = s2[c];
			i++, ci++;
			}
			conct[i] = '\0';
			return (conct);
}

