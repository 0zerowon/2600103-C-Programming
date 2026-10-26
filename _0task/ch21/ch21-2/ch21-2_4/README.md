- 아래 코드에서 fgets함수는 엔터키까지 저장해주므로 출력하면 줄바꿈이 발생한다. 엔터키를 널문자로 변경하는 코드를 추가하여 줄바꿈이 발생하지 않도록 해보시오.
```c
#include<stdio.h>
intmain(void)
{
charstr[20];
printf("문자열입력:");
fgets(str, sizeof(str), stdin);
// 배열에서 ‘\n’을 널문자(‘\0’)로 변환
printf("%s", str);
return0;
}
```
```
문자열입력:hello\n
hello

```
```
문자열입력:hello\n
hello
```
