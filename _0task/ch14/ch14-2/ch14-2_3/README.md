- 키보드로 부터 5개의 정수를 입력 받아 배열(data)에 저장해주는 부분을 함수(get_data)로 작성하시오. 
- 아래코드에서 선언, 호출, 정의 부분을 실행 결과를 고려하여 완성하시오.
```
1번째 data를 입력하시오: 50\n
2번째 data를 입력하시오: 10\n
...
5번째 data를 입력하시오: 60\n
1번째 data: 50
2번째 data: 10
...
5번째 data: 60
```
```c
#include <stdio.h>
//get_data선언
int main(void)
{ 
	int i, data[5]; 
	//get_data호출
	for(i= 0; i< 5; i++) 
		printf(“%d번째 data:%d\n“, i+1, data[i]); 
	return0; 
} 
// get_data정의
```
<img width="1115" height="628" alt="image" src="https://github.com/user-attachments/assets/afcb67f1-1ba0-4683-90d0-182e977dcecf" />
