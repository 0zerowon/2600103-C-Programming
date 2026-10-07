#include <stdio.h>
void prn_str(char** p, short cnt);
int main(void)
{
	char* ptrarr[] = { "eagle", "tiger", "lion", "squirrel" };
	int count;
	count = sizeof(ptrarr) / sizeof(ptrarr[0]);
	prn_str(ptrarr, count);
	return 0;
	}

void prn_str(char** p, short cnt)
{
	for (unsigned short i = 0; i < cnt; i++)
	{
		printf("%s\n", *(p + i));
	}
}
