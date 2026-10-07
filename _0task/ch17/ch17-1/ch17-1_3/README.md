- 다음 코드에서 함수선언과 정의를 추가하여 결과처럼 나오도록 하시오.

```c
#include <stdio.h>
// 함수선언
int main(void)
{
char* ptrarr[] = {"eagle", "tiger", "lion", "squirrel“ };
int count;
count = sizeof(ptrarr)/sizeof(ptrarr[0]);
prn_str(ptrarr, count);
return 0;
}
// 함수정의
```

```
eagle
tiger
lion
squirrel
```

# 소스 코드 설명

```c
void prn_str(char** p, unsigned short cnt);
```
- 반환 값 없는 prn_str 선언
	- 매개변수 char형 더블 포인터 p, 부호 없는 short형 cnt

	<br>

```c
void prn_str(char** p, unsigned short cnt)
{
	for (unsigned short i = 0; i < cnt; i++)
	{
		printf("%s\n", *(p + i));
	}
}
```
- prn_str 함수 정의
	- 반복문 시작
		- 부호 없는 short형 i 선언 및 0으로 초기화
		- i가 매개변수 cnt 보다 작을 때까지 반복
			- 매개변수 p가 가르키는 포인터의 주소에서 포인트 연산하여 
				- i번째 문자열 포인터 배열의 위치 간접 참조 연산하여
					- 문자열의 시작 주소부터 널문자 전까지 문자를 연속으로 출력 후 개행
		- i += 1;
	- 반복문 종료
	- prn_str 함수 종료

# 실행 결과
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/78c64f58-9103-4ee0-a3d0-2a07822dca72" />
