// **********************************************
// 제목: q 또는 Q를 입력할 때까지 문자 입력한 값 출력하기
// 날짜: 2026년 10월 27일
// 작성자: 2600103 송영원
// **********************************************

#include <stdio.h>

int main()
{
	char usrInput;

	while (1)
	{
		fputs("문자 입력: ", stdout);
		usrInput = getchar();
		fgetc(stdin);

		if (usrInput == 'q' || usrInput == 'Q')
		{
			break;
		}
		fputs("입력된 문자는 ", stdout);
		putchar(usrInput);
		fputc('\n', stdout);
	}
}