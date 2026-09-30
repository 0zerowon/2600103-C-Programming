- 교재 324페이지 문제 1번 또는 문제 2번 중에 1문제를 푸세요.
	- 매개변수 arr을 const 선언 한 이유
		- 해당 함수는 출력만을 위한 함수이기에 인자로 사용된 변수의 값이 변경되면 안 되기 때문
```c
void ShowAllData(const int* arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d", arr[i]);
	}
}
```