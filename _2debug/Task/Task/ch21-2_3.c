//이름:홍길동\n
//주소 : 군산시 대학로 558\n
//자동차번호 : 52어6746\n
//<결과출력>
//이름:홍길동
//주소 : 군산시 대학로 558
//자동차번호 : 52어 6746

#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	char name[7];
	char address[18];
	char carNum[10];

	fputs("이름: ", stdout);
	fgets(name, sizeof(name), stdin);
	getchar();
	fputs("주소: ", stdout);
	fgets(address, sizeof(address), stdin);
	getchar();
	fputs("자동차 번호: ", stdout);
	fgets(carNum, sizeof(carNum), stdin);
	getchar();

	fputs("이름: ", stdout);
	puts(name);
	fputs("주소: ", stdout);
	puts(address);
	fputs("자동차 번호: ", stdout);
	puts(carNum);
}