#include <stdio.h>
int main(void)
{
	int ch;
	while (1)
	{
		ch = getchar();
		if (ch == EOF) break;	// Ctrl+z: ^z
		putchar(ch);
	}
	return 0;
}