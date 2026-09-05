# 소스 코드 설명

```
#include <stdio.h>
```
- 표준 input, output 라이브러리 함수의 선언을 포함하고 있는 헤더 파일 stdio.h을 include

<br>

```
int main()
```
- main 함수 시작

<br>

```
int* pi = NULL;
char* pc = NULL;
double* pd = NULL;
```
- 주소형 변수인 포인터를 int형 포인터, char형 포인터,  double형 선언 후 3개의 포인터를 NULL로 초기화 

<br>

```
printf("%p\n", pi);
printf("%p\n", pc);
printf("%p\n", pd);
```
- 문자열을 출력하는 printf 함수를 3번 사용하여, 각각 pi, pc, pd 포인터를 인자로, 서식 문자열 %p로 메모리 주소 값을 16진수로 출력 후, 이스케이프 시퀀스 \n로 개행

<br>

```
printf("%zu\n", sizeof(pi));
printf("%zu\n", sizeof(pc));
printf("%zu\n", sizeof(pd));
```
- 문자열을 출력하는 printf 함수를 3번 사용하여, 각각 pi, pc, pd 포인터를 sizeof 연산자의 피연산자로, 연산자 sizeof가 반환하는 size_t를 서식 문자열 %zu로 포인터 크기를 32비트, 64비트 플랫폼에 따라 각각 4, 8 출력 후, 이스케이프 시퀀스 \n로 개행

<br>

# 실행결과

- 실행 할 때마다 결과가 상이할 수 있음

<br>

<img width="1115" height="628" alt="image" src="https://github.com/user-attachments/assets/d051a95e-51d0-40ad-8b03-d0a623a7f4d2" />

- x86으로 디버그
  - 32비트

<br>

<img width="1115" height="628" alt="스크린샷 2026-09-05 093413" src="https://github.com/user-attachments/assets/eeaa189f-188a-4c2b-8f27-917790ab056e" />

- x64로 디버그
  - 64비트
