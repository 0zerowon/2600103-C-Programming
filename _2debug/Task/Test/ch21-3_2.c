#include <stdio.h>
#include <string.h>
int my_strlen(char* s);
int main(void)
{
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s\n", my_strlen(str), str);
	printf("길이: %d, 내용: %s\n", my_strlen(str) -1, str);
	return 0;
}

int my_strlen(char* s)
{
	int i = 0;
	do
	{
		i++;
	} while (s[i] != '\0');
	
	return i;
}
