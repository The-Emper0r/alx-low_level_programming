#include "main.h"
/**
* print_alphabet_x10 - prints the alphabet 10 times
*/

void print_alphabet_x10(void)
{
	char alpha;
	int num;

	num = 0;

	while (num < 10)
	{
		alpha = 'a';

		while (alpha < 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		num++;
	}
}
