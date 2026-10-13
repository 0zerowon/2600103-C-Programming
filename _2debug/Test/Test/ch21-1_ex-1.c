#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main(void)
{
	int x;
	char ch;
	printf("정수를 입력하시오 : ");
	scanf("%d", &x); // 정수 입력: 숫자를 문자 하나씩 버퍼에 저장 후 서식 지정자가 숫자로 변환하여 x에 할당
	printf("문자를 입력하시오 : ");
	scanf("%c", &ch); // 입력대기없이 바로 리턴함: 버퍼에 남아 있는 '\n'이 저장됨
	printf("정수: % d\n", x);
	printf("문자: % c\n", ch); // ‘\n’를 출력함
	return 0;
}