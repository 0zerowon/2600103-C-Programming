#include <stdio.h>
int main(void)
{
	char str[20];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	int i = 0;
	do
	{
		i++;
	}
	while (str[i] != '\n');
	str[i] = '\0';
	printf("%s", str);
	return 0;
}