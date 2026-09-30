- 키보드로 부터 5개의 정수를 입력 받아 배열(data)에 저장해주는 부분을 함수(get_data)로 작성하시오. 
- 아래코드에서 선언, 호출, 정의 부분을 실행 결과를 고려하여 완성하시오.
```
1번째 data를 입력하시오: 50\n
2번째 data를 입력하시오: 10\n
...
5번째 data를 입력하시오: 60\n
1번째 data: 50
2번째 data: 10
...
5번째 data: 60
```
```c
#include <stdio.h>
//get_data선언
int main(void)
{ 
	int i, data[5]; 
	//get_data호출
	for(i= 0; i< 5; i++) 
		printf(“%d번째 data:%d\n“, i+1, data[i]); 
	return0; 
} 
// get_data정의
```
# 소스 코드 설명
```c
#pragma warning(disable:6031)

#define _CRT_SECURE_NO_WARNINGS
```
- scanf 함수를 사용하기 위해 VS의 보안 경고 무시

<br>

```c
void get_data(int* d);
```
- 반환 없는 get_data 함수 선언
	- int형 포인터 매개변수 d

	<br>

```c
for (i = 0; i < 5; i++)
{
	if (i == 2)
	{
		printf("...");
		continue;
	}
	if (i == 3)
	{
		printf("\n");
		continue;
	}
}
```
- 배열 첨자 2일 때는 "..." 출력 후 continue
	- printf("3번째 data: ", data[2]); 출력 안 함
- 배열 첨자 3일 때는 개행 후 continue
	- printf("4번째 data: ", data[3]); 출력 안 함

	<br>

```c
void get_data(int* d)
```
- get_data 함수 시작

<br>

```c
for (int i = 0; i < 5; i++)
{
	if (i == 2)
	{
		printf("...");
		continue;
	}
	if (i == 3)
	{
		printf("\n");
		continue;
	}
	printf("%d번째 data를 입력하시오: ", i + 1);
	scanf("%d", d + i);
}
```
- i가 0부터 4까지 반복문 실행
	- i가 2일 때
		- "..." 출력 후 continue
	- i가 3일 때
		- 개행 후 continue
	- 배열 3번째, 4번째 제외 "%d번째 data를 입력하시오: " 출력
		- "%d" == i + 1
	- 배열의 i번째에 사용자 입력 정수형 저장
# 실행 결과
<img width="1115" height="628" alt="image" src="https://github.com/user-attachments/assets/01bfe923-e906-4ed1-9e9b-df32d8d99469" />
