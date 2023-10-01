#include "strcpy.h"

char *_strcpy(char *dest, char *src)
{
	if (dest == 0)
		return (0);

	while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
	*dest = '\0';

	return (dest);
}
