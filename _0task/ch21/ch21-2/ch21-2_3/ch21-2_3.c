// **********************************************
// 제목: 이름, 주소, 자동차 번호 입출력하기
// 날짜: 2026년 10월 27일
// 작성자: 2600103 송영원
// **********************************************

#include <stdio.h>

int main()
{
	char name[7];
	char address[18];
	char carNum[10];

	fputs("이름: ", stdout);
	//fgets(name, sizeof(name), stdin);
	gets(name);
	fputs("주소: ", stdout);
	//fgets(address, sizeof(address), stdin);
	gets(address);
	fputs("자동차 번호: ", stdout);
	//fgets(carNum, sizeof(carNum), stdin);
	gets(carNum);

	fputs("이름: ", stdout);
	puts(name);
	fputs("주소: ", stdout);
	puts(address);
	fputs("자동차 번호: ", stdout);
	puts(carNum);
}