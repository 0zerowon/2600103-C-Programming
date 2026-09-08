# 소스 코드 설명

```c
#include <stdio.h>
```
- C 표준 라이브러리 input, output 함수의 선언을 포함하고 있는 헤더 파일 stdio.h를 포함

<br>

```c
int main()
```
- main 함수 시작

<br>

```c
int a = -100;
char b = 'A';
double c = 3.14;
```
- int형, char형, double형의 변수 a, b, c를 선언 후 각각 -100, A, 3.14로 초기화

<br>

```c
printf("int형 변수 a의 값은: %d\n", *&a);
printf("char형 변수 b의 값은: %c\n", *&b);
printf("double형 변수 c의 값은: %.2f\n", *&c);
```
- 문자열을 출력하는 printf 함수를 3번 사용하여
  - 각각 첫 번째 인자로 문자열 "int형 변수 a의 값은: ", "char형 변수 b의 값은: ", "double형 변수 c의 값은: " 출력할 때
	- 서식 문자열을 각각 %d, %c, %.2f로 출력, 이스케이프 시퀀스 \n로 개행하고
  - 각각 두 번째 인자로 주소 연산자를 사용하고 간접 참조 연산자를 사용하여 각각의 서식 문자열에 해당하는 a, b, c를 출력

<br>

# 실행 결과


