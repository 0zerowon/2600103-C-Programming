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
char a = 'A';
int b = 36;
double c = 3.141592;
```
- char형, int형, double형의 변수 a, b, c를 선언 후 각각 A, 36, 3.141592로 초기화

<br>

```c
printf("char형 변수 a의 주소: %p\n", &a);
printf("int형 변수 b의 주소: %p\n", &b);
printf("double형 변수 c의 주소: %p\n", &c);
```
- 문자열을 출력하는 printf 함수를 3번 사용하여
  - 각각 첫 번째 인자로 문자열 "char형 변수 a의 주소: ", "int형 변수 b의 주소: ", "double형 변수 c의 주소: " 출력할 때
	- 서식 문자열을 %p로 변수의 메모리 주소 값을 16진수로 출력, 이스케이프 시퀀스 \n로 개행하고
  - 각각 두 번째 인자로 주소 연산자를 사용하여 서식 문자열의 %p에 해당하는 a, b, c를 출력

# 실행 결과

- 실행 할 때마다 결과가 상이할 수 있음

<br>

<img width="1483" height="762" alt="스크린샷 2026-09-05 152957" src="https://github.com/user-attachments/assets/7fe5d4f3-fd07-4aeb-a679-5a4b75a11b6e" />
