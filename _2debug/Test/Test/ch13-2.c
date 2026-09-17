#include <stdio.h>

int main()
{
	{
		char s[] = "HelloWorld";	// char s[] = { 'H', 'e', 'l', 'l', 'o', 'W', 'o', 'r', 'l', 'd', '\0' }
		char* p = "HelloWorld";		// 첫 번째 문자 시작 주소 포인터 변수 저장(8 Byte), 문자열은 상수 공간에 저장

		printf("%p, %p", p, p + 1);	// 00A87B30, 00A87B31
	}

	{
		char s[] = "HelloWorld";
		//s = "GoodBye";			// 오류: 첫 번째 인자 주소에 문자열 할당
		strcpy(s, "GoodBye");
		char* p = "HelloWorld";
		printf("%s\n", p);
		strcpy(p, "GoodBye");	// 오류: 상수 공간에 할당된 건 변경 불가능
		printf("%s\n", p);
		p = "GoodBye";			// 정상: 변수 공간에 할당하여 변경 가능
	}
}