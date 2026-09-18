- 다음 코드에서 사전에서 제일 앞에 나오는 문자열을 찾는 코드를 작성하시오.
- 함수를 사용하지 말고 각 문자열의 첫 번째 문자 중에서 최소값을 찾아라.
```c
#include <stdio.h>
int main(void)
{
	char* fruits[] = {"apple", "blueberry", "orange", "melon"};
	// 사전에서 제일 앞에 나오는 문자열을 찾는 코드
	return 0;
}
```

# 소스 코드 설명
```c
char* firstString = { "first" };
```
- 포인터 배열 선언
	- 초기화하고 사용해야 해서 "first"로 초기화함

<br>

```c
int n = sizeof(fruits) / sizeof(fruits[0]);
```
- 배열의 크기를 구하는 코드
	- fruits 배열의 전체 크기 / fruits 배열의 첫 번째 요소의 크기
		- n: 배열의 요소 개수

<br>

```c
for (int i = 0; i < n-1; i++)
{
	if(fruits[i][0] < firstString[0])
	{
		firstString = fruits[i];
	}
}
```
- n-1까지 반복문을 돌면서 각 문자열의 첫 번째 문자를 비교
	- fruits[i][0]: i번째 문자열의 첫 번째 문자
	- firstString[0]: 현재까지 찾은 사전순으로 가장 앞에 오는 문자열의 첫 번째 문자
	- 만약 fruits[i][0]이 firstString[0]보다 작으면
		- 아스키코드 값이 더 작으면 사전순으로 앞에 오는 문자
	- firstString을 fruits[i]로 업데이트
		- 문자열 할당

<br>

```c
printf("사전순으로 가장 앞에 오는 문자열: %s", firstString);
```
- 사전순으로 가장 앞에 오는 문자열 출력

# 실행 결과
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/977d55dd-918b-4a18-930f-dbd30a047f6f" />
