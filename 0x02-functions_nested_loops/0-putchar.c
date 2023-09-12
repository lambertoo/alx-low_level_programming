#include "_putchar.h"

/**
 * main - entry point
 *
 * Description: print to stdout without
 * using std libraries.
 *
 * Return: 0 (success)
 */
int main(void)
{
	char texts[] = {'_', 'p', 'u', 't',
					'c', 'h', 'a', 'r', '\0'};

	int i;

	for (i = 0; i < (int)sizeof(texts); i++)
	{
		_putchar(texts[i]);
	}
	_putchar('\n');

	return (0);
}
