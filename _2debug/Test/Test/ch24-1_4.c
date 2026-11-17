#include <stdio.h>
int main(void)
{
	int ch, i;
	FILE* fp = fopen("data.txt", "rt");
	if (fp == NULL) { puts("파일오픈 실패!"); return -1; }
	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF) break;
		printf("%d ", ch);
	}
	fclose(fp);
	return 0;
}
//파일-> A\r\nB\r\n
//\r -> 13
//\n -> 10
//65 10 66 10