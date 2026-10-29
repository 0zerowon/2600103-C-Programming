#include <stdio.h>
#include <string.h>
void my_strcat(char* s1, char* s2);
int main(void)
{
	char str1[20] = "First~";
	char str2[20] = "Second";
	my_strcat(str1, str2);
	puts(str1);
	return 0;
}

void my_strcat(char* s1, char* s2)
{
	int i = 0;
	int s1OriginalLen = strlen(s1);

	do
	{
		s1[s1OriginalLen + i] = s2[i];

		i++;
	}
	while (s2[i] != '\0');

	s1[s1OriginalLen + i] = '\0';
}
