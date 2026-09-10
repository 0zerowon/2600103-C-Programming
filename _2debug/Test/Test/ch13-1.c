/*
	배열은 원소들이 메모리에서 연속된 공간에 할당됨
	첫번째 요소의 주소만 알면 나머지 요소의 주소는 쉽게 계산 가능
	배열 요소의 주소는 (배열명 + 인덱스) 로 표현 가능
	배열 요소의 값은 *(배열명 + 인덱스) 로 표현 가능
*/

// a[i] == *(a+i)
// &a[i] == a+i

#include <stdio.h>

int main(void)
{
	{
		int arr[3] = { 15, 25, 35 };
		int* ptr = &arr[0];     // int* ptr=arr; 과 동일한 문장 

		printf("%d %d \n", ptr[0], arr[0]);		// ptr[n]: 포인터지만 배열처럼 사용 가능
		printf("%d %d \n", ptr[1], arr[1]);
		printf("%d %d \n", ptr[2], arr[2]);
		printf("%d %d \n", *ptr, *arr);
	}

	{
		//printf("%p", 1000);

		int* p;

		p = (int*)1000;		// p = (int*)1000;
		p = p + 1;			// p = (int*)1004;
		p = p - 2;			// p = (int*)996;
		p++;				// p = (int*)1000;
		p--;				// p = (int*)1004;
	}
	
	{
		int arr[3] = { 11, 22, 33 };
		int* ptr = arr;     // int* ptr = &arr[0];

		printf("%d %d %d \n", arr[0], arr[1], arr[2]);
		printf("%d %d %d \n", ptr[0], ptr[1], ptr[2]);
		printf("%d %d %d \n", *arr, *(arr + 1), *(arr + 2));
		printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));
	}
	return 0;
}