#include <stdio.h>

void main()
{
	int i = 10;
	char c = 69;
	float f = 12.3;
	
	printf("i의주소: %u\n", &i);	// 변수 i의 주소 출력
	printf("c의주소: %u\n", &c);	// 변수 c의 주소 출력
	printf("f의주소: %u\n", &f);	// 변수 f의 주소 출력
	
}