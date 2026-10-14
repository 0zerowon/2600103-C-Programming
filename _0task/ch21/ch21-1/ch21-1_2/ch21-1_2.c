// *****************************************
// 제 목: q 또는 Q 키를 문자 입력에 넣지 않는 한 사용자의 키보드로 입력한 문자 출력하기
// 날 짜: 2026년 10월 13일
// 작성자: 2600103 송영원
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	char usrInput;

	while (1)
	{
		printf("문자 입력: ");
		scanf(" %c", &usrInput);

		if (usrInput == 'q' || usrInput == 'Q')
		{
			break;
		}
		printf("입력된 문자는 %c\n", usrInput);
	}
}