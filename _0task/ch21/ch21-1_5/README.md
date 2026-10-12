- 아래쪽 실행결과처럼 나오도록 문자 입출력(scanf(“%c”,…)) 방식을 이용하여 코드를 수정하시오. 
- 엔터키(‘\n’)가 나올 때까지 문자를 하나씩 배열에 복사하고 마지막에 널문자를 대입한다.

```c
#include<stdio.h>
intmain(void)
{
charstr[20]; 
printf(“문자열을입력하시오:”);
scanf(“%s”, str); 
printf(“문자열: %s\n”, str);
return0;
}
```

```
문자열을 입력하시오 :Helloworld<엔터>
문자열:Hello
```
```
문자열을 입력하시오 :Helloworld<엔터>
문자열:Helloworld
```