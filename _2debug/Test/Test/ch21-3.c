#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
//int atoi(const char* str);		// ascii code to integer

//size_t strlen(const char* str);
//char* strcpy(char* dest, const char* src);		// dest 주소 값 반환
//char* strcat(char* dest, const char* src);		// concatenate
//int strcmp(const char *s1, const char *s2s);		// "abc" > "ABC"

int main()
{
	printf("%d", strlen("123"));

	char str1[30] = "Simple String";
	char str2[30];
	//str2 = "hello"; // error
	strcpy(str2, str1);

	printf("%d\n", strcmp("ABCD", "ABCC")); // 1 출력: 전자가 더 큼, 뒷 순위
	printf("%d\n", strcmp("ABCD", "ABCD")); // 0 출력: 같음
	printf("%d\n", strcmp("ABCD", "ABCE")); // -1 출력: 전자가 작음, 앞 순위
	printf("%d\n", strcmp("ABCD", "ABCDE")); // -1 출력

}