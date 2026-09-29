#include <stdio.h>

int A(int v)		// 호출 시 지역 변수인 매개변수를 메모리에 할당 및 인자 값으로 초기화
{
	return ++v;
}

int main()
{
	int a = 10;		// 초기화 안 하면 이전에 해당 메모리 주소를 사용하던 변수의 값이 할당됨

	printf("%d", A(a));

	//{
	//	int a = 100, b = 200;
	//	printf("a = % d b = % d\n", a, b);
	//	swap(&a, &b);
	//	printf("a = % d b = % d\n", a, b);
	//	return 0;
	//	void swap(int* px, int* py) //주소에 의한 호출
	//	{
	//		int tmp;
	//		tmp = *px;
	//		*px = *py;
	//		*py = tmp;
	//	}
	//}
}