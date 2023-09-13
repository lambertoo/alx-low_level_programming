#include "jack_bauer.h"
#include "_putchar.h"

/**
 * jack_bauer - prints every minute of the day
 * of jack bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hr_d1, hr_d2;
	int mn_d1, mn_d2;

	for (hr_d1 = 0; hr_d1 < 3; hr_d1++)
	{
		for (hr_d2 = 0; hr_d2 <= 9; hr_d2++)
		{
			if  ((hr_d1 == 2) && (hr_d2 > 3))
				break;
			for (mn_d1 = 0; mn_d1 < 6; mn_d1++)
			{
				for (mn_d2 = 0; mn_d2 <= 9; mn_d2++)
				{
					_putchar(hr_d1 + 48);
					_putchar(hr_d2 + 48);
					_putchar(':');
					_putchar(mn_d1 + 48);
					_putchar(mn_d2 + 48);
					_putchar('\n');
				}
			}
		}
	}
}
