#include "atoi.h"

int _atoi(char *s)
{
	int rst;
	int sign;
	int n;

	sign = 0;
	rst = 0;
	n = 0;

	if (s[0] == '-')
	{
		sign = -1;
		n++;
	}
	else if (s[0] == '+')
	{
		n++;
	}

	while (s[n] != '\0')
	{
		if (s[n] < '0' || s[n] > '9')
			break;
		rst = rst * 10 + (s[n] - '0');
		n++;
	}
	return (sign * rst);
}
