#include <stdio.h>
#include <string.h>
void RemoveBSN(char str[]);
int main(void)
{
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s \n", strlen(str), str);
	//RemoveBSN(str);
	printf("길이: %d, 내용: %s \n", strlen(str) - 1, str);
	return 0;
}
void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = '\0';
	//Good morning\n\0
	//Good morning\0\0
}