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
int i = 10;
char c = 69;
float f = 12.3;
```
- int형, char형, float형 변수 i, c, f를 선언 후 각각 10, 69, 12.3으로 초기화 

<br>

```c
printf("i의 주소: %p\n", &i);
printf("c의 주소: %p\n", &c);	
printf("f의 주소: %p\n", &f);
```
- 문자열을 출력하는 printf 함수를 3번 사용하여, 각각 주소 연산자를 사용하여 i, c, d를 인자로, 각각 문자열 "i의 주소: ", "c의 주소: ", "f의 주소: " 출력, 각각 서식 문자열 %p로 변수의 메모리 주소 값을 16진수로 출력 후, 이스케이프 시퀀스 \n으로 개행

<br>

# 실행 결과

- 실행 할 때마다 결과가 상이할 수 있음

<br>

<img width="1115" height="628" alt="image" src="https://github.com/user-attachments/assets/1edafbd6-5eb2-4340-bd11-9f2fb5733e26" />

