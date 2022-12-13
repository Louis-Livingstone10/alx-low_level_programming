#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print base 16 in reverse
 */

int main(void)

{
	char c;

	int d;

	c = 'a';

	d = '0';
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
return (0);
