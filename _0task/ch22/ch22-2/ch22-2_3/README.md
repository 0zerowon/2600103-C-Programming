- 실습과제 2번에서 데이터 처리부분을 구조체 포인터를 이용하여 구현해보라.
	- 즉, 배열표현을 이용한 문장을 포인터를 이용한 문장으로 바꾸어 보라는 의미임

```
이름을 입력하시오: 임꺽정\n
성적을 입력하시오: 75\n
이름을 입력하시오: 홍길동\n
성적을 입력하시오: 85\n
이름을 입력하시오: 장길산\n
성적을 입력하시오: 65\n

이름은 임꺽정, 점수는 75점
```
# 소스 코드 설명
- 전반적인 코드 논리는 [ch22-2_2 README.md](https://github.com/0zerowon/2600103-C-Programming/blob/main/_0task/ch22/ch22-2/ch22-2_2/README.md#%EC%86%8C%EC%8A%A4-%EC%BD%94%EB%93%9C-%EC%84%A4%EB%AA%85)와 같음
```c
	struct student* pArr = arr;
```
- student형 포인터 pArr 선언 및 구조체 배열 arr의 첫 번째 주소로 초기화
```c
		gets((pArr + i)->name);
```
- gets 함수를 호출출하여 사용자로부터의 입력을 (pArr + i)->name에 문자열 할당
	- 인자는 구조체 배열 arr의 i 첨자의 원소의 멤버 변수 name 배열의 첫 번째 주소
		- 구조체 포인터 pArr에 i만큼 포인터 연산을 하여 가리키는 주소는 arr의 i 첨자 원소이고
			- 간접 멤버 연산자로	name을 가리킴
```c
		scanf("%d", &(pArr + i)->score);
```
- scanf 함수를 호출하여 사용자로부터의 입력을 (pArr + i)->score에 정수 할당
	- 두 번째 인자는 구조체 배열 arr의 i 첨자의 원소의 멤버 변수 score의 주소
		- 구조체 포인터 pArr에 i만큼 포인터 연산을 하여 가리키는 주소는 arr의 i 첨자 원소이고
			- 갑접 멤버 연산자로 score를 가리킨 것을 주소로 매개변수에 넘겨줌
```c
		ResFirstNameStrcmp = strcmp((pArr + IdxFirstName)->name, (pArr + i)->name);
```
- ResFirstNameStrcmp에 대입할 때 strcmp의 반환 값을 대입
	- strcmp의 인자
	- 첫 번재 인자는 pArr + IdxFirstName 포인터 연산하여
		- 가리키는 값인 arr의 IdxFirstName 첨자 원소에 
			- 간접 멤버 연산자로 name의 첫 번째 원소의 주소
	- 두 번째 인자는 pArr + i 포인터 연산하여
		- 가리키는 값인 arr의 i 첨자 원소에 
			- 간접 멤버 연산자로 name의 첫 번째 원소의 주소
```c
	printf("이름은 %s, 점수는 %d", (pArr + IdxFirstName)->name, (pArr + IdxFirstName)->score);
```
- printf 함수를 호출하여 출력할 때 두 서식 지정자에 대한 인자로
	- pArr + IdxFirstName 포인터 연산하여
		- 가리키는 값인 arr의 IdxFirstName 첨자 원소에 
			- 간접 멤버 연산자로 name의 첫 번째 원소의 주소
		- 가리키는 값인 arr의 IdxFirstName 첨자 원소에 
			- 간접 멤버 연산자로 score의 값

# 실행 결과
<img width="1115" height="628" alt="image" src="https://github.com/user-attachments/assets/936c99f2-0329-428f-abeb-7565fdecdbec" />
