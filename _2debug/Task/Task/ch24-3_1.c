#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{

	FILE* a = fopen("a.txt", "rt");
	FILE* b = fopen("b.bin", "wb");
	int buffer[10];

	if (a == NULL || b == NULL)
	{
		puts("open fail");
		return -1;
	}

	for (int i = 0; i < 10; i++)
	{
		fscanf(a, "%d", &buffer[i]);
	}
	fwrite(buffer, sizeof(int), 10, b);
	fclose(a);
	fclose(b);
}