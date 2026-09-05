// **********************************************
//		제	목: 실습 과제 3
//		날	짜: 2026년 9월 5일
//		작성자: 2600103 송영원
// **********************************************

#include <stdio.h>

int main()
{
	char ch = 'A';
	int in = 10;
	double db = 3.4;

	printf("%p\n", &ch);
	printf("%p\n", &in);
	printf("%p\n", &db);
	// 번지 임의로 지정하는 방법 있었지 않았나

	printf("%d\n", sizeof(&ch));
	printf("%d\n", sizeof(&in));
	printf("%d\n", sizeof(&db));
	// 자료형 크기가 똑같이 4Byte: 주소형은 32비트에서 4바이트임(포인터)
}