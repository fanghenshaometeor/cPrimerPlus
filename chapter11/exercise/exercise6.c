/* exercise6.c */
#include <stdio.h>
#include <stdlib.h>

char *strncpy (char *s1, const char *s2, size_t n);

int main (void)
{
	system ("pause");
	return 0;
}

char *strncpy (char *s1, const char *s2, size_t n)
{
	int count, index = 0;

	while (*(s2 + index) != '\0')
		index++;
	count = index;

	if (count <= n)
	{
		s1 = s2;
		*(s1 + count) = '\0';
	}
	else
	{
		for(index = 0; index < n; index++)
		{
			*s1 = *s2;
			index ++;
			s1 = s1 + index;
			s2 = s2 + index;
		}
	}

	return s1;
}