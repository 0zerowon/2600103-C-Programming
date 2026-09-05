// **********************************************
//		제	목: 포인터의 메모리 크기
//		날	짜: 2026년 9월 3일
//		작성자: 2600103 송영원
// **********************************************

#include <stdio.h>

int main()
{
	int* pi = NULL;
	char* pc = NULL;
	double* pd = NULL;

	printf("%p\n", pi);				// 0
	printf("%p\n", pc);				// 0
	printf("%p\n", pd);				// 0

	printf("%zu\n", sizeof(pi));	// 4Byte || 8 Byte
	printf("%zu\n", sizeof(pc));	// 4Byte || 8 Byte
	printf("%zu\n", sizeof(pd));	// 4Byte || 8 Byte
}