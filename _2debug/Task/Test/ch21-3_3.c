#include <stdio.h>
#include <string.h>
void my_strcpy(char* s1, char* s2);
int main(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	my_strcpy(str2, str1);
	puts(str2);
	return 0;
}

void my_strcpy(char* s1, char* s2)
{
	int i = 0;

	do
	{
		s1[i] = s2[i];

		i++;
	}
	while (s2[i]!='\0');

	s1[i] = '\0';
}
