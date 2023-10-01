#include "strcmp.h"

int _strcmp(char *s1, char *s2)
{
	int n;

	n = 0;
	while (s1[n] == s2[n])
	{
		if (s1[n] == '\0' || s2[n] == '\0')
			break;
		n++;
	}
	if (s1[n] == '\0' && s2[n] == '\0')
		return (0);
	else
		return (s1[n] - s2[n]);
}
