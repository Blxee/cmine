#include "cmine.h"

int main(void)
{
	write(1, "\x1B[?1049\x1B[44m\x1b[2JhHello, World!\n", 50);
	read(0, &(char){0}, 1);
	return (0);
}
