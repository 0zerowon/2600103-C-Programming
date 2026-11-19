- 20페이지 예제4-1의 실행 결과를 자세히 설명하시오.
```c
#include <stdio.h>
int main(void)
{
	char name[10];
	char gender;
	int age;
	int ret;
	FILE* fp = fopen("friend.txt", "rt");
	if (fp== NULL){ puts("파일오픈 실패!"); return -1; }
	while (1)
	{
		ret = fscanf(fp, "%s%c%d", name, &gender, &age);
		if (ret == EOF) break;
		printf("%s %c %d \n", name, gender, age);
	}
	fclose(fp);
	return 0;
}
```
```txt
홍길동 M 23임꺽정 M 40장길산 F 30
```
```
홍길동 -858993460
M 23
임꺽정 23
M 40
장길산 40
F 30
```
- 첫 번째 반복문
	- "홍길동"은 문자열로 정상적으로 name에 할당
		- 구문 문자 공백 전까지
	- 버퍼에 남아 있는 공백 문자를 gender에 할당
	- 서식 문자열 '%d'로, 정수를 읽을 수 없어서
		- age의 초기 값인 쓰레기 값이 그대로
	- "홍길동 _쓰레기 값_ \n" 출력
- 두 번째 반복문
	- 버퍼에 남아 있는 'M'을 문자열로 name에 할당
	- 버퍼에 남아 있는 공백 문자를 gender에 할당
	- age에 23 할당
		- "임꺽정"과 구분
			- 아스키코드의 숫자와 문자
	- "M 23 \n" 출력
- 세 번째 반복문
	- "임꺽정"을 name에 할당
	- 공백 문자를 gender에 할당
	- age에 할당하지 않고 age의 값 23 유지
	- "임꺽정 23" 출력
- 네 번째 반복문
	- 버퍼에 남아 있는 'M'을 문자열로 name에 할당
	- 공백 문자를 gender에 할당
	- 40을 age에 할당
		- "장길산"과 구분
	- "M 40 \n" 출력
- 다섯 번째 반복문
	- "장길산"을 name에 할당
	- 공백 문자를 gender에 할당
	- age에 할당하지 않고 age의 값 40 유지
	- "장길산 40 \n" 출력
- 여섯 번째 반복문
	- 'F'를 문자열로 name에 할당
	- 공백 문자를 gender에 할당
	- age에 30 할당
	- "F 30 \n" 출력
