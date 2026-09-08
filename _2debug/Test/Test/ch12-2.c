#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;

	printf("%d\n", *pa);

	// 간접 참조 연산자는 포인터와 상수 모두 사용 가능
	*pa += *&a;
	printf("%d\n", *&a);

	// 간접 참조 연산자는 포인터에 저장된 주소로부터
	// 포인터가 가리키는 변수 자료형의 크기만큼 읽거나 쓰기를 수행함
	double b = 3.14;
	int* pb = &b;			// double 변수의 주소를 int 포인터로 초기화함

	printf("%d\n", *pb);	// 4Byte만 읽음: 1374389535(?)

	printf("%p\n", &pa);	// 포인터도 변수이므로 포인터의 주소 출력 
}