- 자동차 모델, 번호판, 주행 거리를 멤버로 가지는 구조체를 선언하고
	- 다음처럼 키보드로부터 정보를 입력 받아 구조체 멤버 변수에 저장하고
	- 변수 값을 화면에 각각 출력하는 프로그램을 작성하라.
- 강의노트 예제 1,2번을 참고하라
	- 문자열은 입력을 따로 배열에 저장하여
		- 그 배열의 원소로 구조체 멤버 _초기화(대입)_
			- 문자열 리터럴 대신
		- strcpy 함수 호출

```
모델을 입력하시오: 산타페\n
번호판을 입력하시오: 10A5577\n
주행 거리를 입력하시오: 10000\n

1. 모델: 산타페
2. 번호판: 10A5577
3. 주행 거리: 10000km
```

# 소스 코드 설명
```c
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>
```
- 표준 입출력 함수와 문자열 처리 함수를 사용하기 위해
	- 보안 경고 무시
	- 반환 값 경고 무시
	- stdio.h, string.h 헤더 파일 포함

```c
struct MyCar
{
	char modelName[10];
	char number[10];
	int distance;
};
```
- 자동차 모델, 번호판, 주행 거리를 멤버 변수로 갖는 구조체 MyCar 정의
	- char형 크기 10 배열 modelName
	- char형 크기 10 배열 number
	- int형 distance
```c
int main()
{
```
- main 함수 정의
```c
	struct MyCar car;
	char buffer[10];
```
- 구조체 MyCar형 변수 car 선언
```c
	fputs("모델을 입력하시오: ", stdout);
	gets(buffer);
```
- fputs 함수를 호출하여 "모델을 입력하시오: " 문자열을 출력
- gets 함수를 호출하여 키보드로부터 문자열을 입력받아 buffer 배열에 저장
```c
	for (int i = 0; i < sizeof(buffer); i++)
	{
		car.modelName[i] = buffer[i];
	}
```
- for 반복문을 사용하여 buffer 배열의 각 원소를 car 구조체의 modelName 배열에 대입
```c
	fputs("번호판을 입력하시오: ", stdout);
	gets(buffer);
	strcpy(car.number, buffer);
```
- fputs 함수를 호출하여 "번호판을 입력하시오: " 문자열을 출력
- gets 함수를 호출하여 키보드로부터 문자열을 입력받아 buffer 배열에 저장
- strcpy 함수를 호출하여 buffer 배열의 문자열을 car 구조체의 number 배열에 복사
```c
	fputs("주행 거리를 입력하시오: ", stdout);
	scanf("%d", &car.distance);
```
- fputs 함수를 호출하여 "주행 거리를 입력하시오: " 문자열을 출력
- scanf 함수를 호출하여 키보드로부터 정수를 입력받아 car 구조체의 distance 변수에 저장
```c
	putchar('\n');
	printf("1. 모델: %s\n", car.modelName);
	printf("2. 번호판: %s\n", car.number);
	printf("3. 주행 거리: %dkm\n", car.distance);
```
- putchar 함수를 호출하여 개행 문자 출력
- printf 함수를 호출하여 "1. 모델: " 문자열과 car 구조체의 modelName 문자열 출력 및 개행
- printf 함수를 호출하여 "2. 번호판: " 문자열과 car 구조체의 number 문자열 출력 및 개행
- printf 함수를 호출하여 "3. 주행 거리: " 문자열과 car 구조체의 distance 정수 출력 및 "km" 출력 후 개행
```c
}
```
- main 함수 종료
# 실행 결과
<img width="979" height="494" alt="image" src="https://github.com/user-attachments/assets/4c9cff9a-ddeb-4baa-97a6-a681011ff9dd" />
