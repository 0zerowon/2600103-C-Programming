- 단어 5개을 입력 받고 사전에서 제일 앞과 뒤에 나오는 단어를 각각 출력하시오.
- 문자열의 최대, 최소값은 각각 사전에서 제일 앞, 뒤에 나오는 단어임,
- 문자열의 대소는 strcmp함수 이용할 것

```
문자열 입력: hello\n
문자열 입력: world\n
문자열 입력: apple\n
문자열 입력: melon\n
문자열 입력: banana\n
제일 앞: apple
제일 뒤: world

```

# 소스 코드 설명
```c
#include <stdio.h>
#include <string.h>
```
- 표준 입출력 함수 fputs, fgets, printf 포함
- 표준 문자열 함수 strlen, strcmp, strcmp 포함

```c
int main()
{
```
- main 함수 시작
```c
	char strs[5][10];
	int firstStrIdx = 0, lastStrIdx = 0;
	int cmpRes = 0;
```
- 문자열 5개 저장할 strs 선언
- 사전 제일 앞, 뒤 첨자 값 firstStrIdx, lastStrIdx 선언 및 0으로 초기화
- strcmp 함수로 비교한 결과 저장할 cmpRes 선언 및 0으로 초기화
```c
	for (int i = 0; i < 5; i++)
	{
```
- 반복문 시작
```c
		fputs("문자열 입력: ", stdout);
```
- fputs 함수로 "문자열 입력: " 출력
```c
		fgets(strs[i], sizeof(strs[i]), stdin);
```
- fgets 함수로 문자열 5개 할당
```c
		int j = strlen(strs[i]);
```
- strlen 함수로 각 문자열 끝을 나타내는 널 문자가 할당되어 있는 첨자를 참조할 j
```c
		strs[i][j - 1] = '\0';
```
- fgets로 '\n'이 할당되어 있는 첨자인 j - 1 열에 '\0' 대입
```c
	}
```
- 반복문 종료
```c
	for (int i = 1; i < 5; i++)
	{
```
- 반복문 시작
	- firstStrIdx, lastStrIdx를 0으로 초기화했으므로 1 첨자부터 참조
```c
		cmpRes = strcmp(strs[firstStrIdx], strs[i]);
```
- cmpRes에 strCmp 함수로 각 문자열을 비교해서 결과 대입
```c
		if (cmpRes > 0)
		{
			firstStrIdx = i;
		}
```
- cmpRes가 0 보다 큰 건 
	- strcmp 함수의 결과인 문자열 strs[firstStrIdx] - strs[i]가 0 보다 큰 것이기에
		- 문자열 strs[i]의 아스키코드 값이 작다는 것을 의미
		- 사전 순 제일 앞에 오는 문자열의 첨자 값을 알 수 있음
- firstStrIdx에 대입하여 반복할 때마다 첫 번째 strcmp 함수 호출의 인자로 사용
```c
		cmpRes = strcmp(strs[lastStrIdx], strs[i]);
		if (cmpRes < 0)
		{
			lastStrIdx = i;
		}
```
- cmpRes에 strCmp 함수로 각 문자열을 비교해서 결과 대입
- cmpRes가 0 보다 작은 건 
	- strcmp 함수의 결과인 문자열 strs[firstStrIdx] - strs[i]가 0 보다 작은 것이기에
		- 문자열 strs[i]의 아스키코드 값이 크다는 것을 의미
		- 사전 순 제일 뒤에 오는 문자열의 첨자 값을 알 수 있음
- lastStrIdx에 대입하여 반복할 때마다 두 번째 strcmp 함수 호출의 인자로 사용
```c
	}
```
- 반복문 종료
```c
	printf("제일 앞: %s\n", strs[firstStrIdx]);
	printf("제일 뒤: %s\n", strs[lastStrIdx]);
}
```
- printf 함수를 호출하여 "제일 앞: " 출력 및
	- 사전에서 제일 앞에 오는 문자열 출력 및 개행
- printf 함수를 호출하여 "제일 뒤: " 출력 및
	- 사전에서 제일 뒤에 오는 문자열 출력 및 개행
# 실행 결과