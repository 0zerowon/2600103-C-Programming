- 위쪽 실행결과처럼 나오는 이유를 설명하고 아래쪽 결과처럼 나오도록 코드를 수정해 보시오. 
	- 19, 21페이지처럼 그림을 그려서 설명하라.

```c
#include<stdio.h>
intmain(void)
{
intx;
charname[10]; 
charblood_type; 
printf(“이름을 입력하시오:”);
scanf(“%s”, name); 
printf(“혈액형을 입력하시오:”);
scanf(“%c”, &blood_type);
printf(“이름: %s\n”, name);
printf(“혈액형: %c\n”, blood_type);
return0;
}
```

```
이름을 입력하시오: 홍길동\n
혈액형을 입력하시오: 이름: 홍길동
혈액형:
```
```
이름을 입력하시오: 홍길동\n
혈액형을 입력하시오: A\n
이름: 홍길동
혈액형: A
```