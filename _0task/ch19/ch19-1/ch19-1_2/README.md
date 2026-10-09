- 인터넷에서 함수의 매개변수에 함수 포인터를 활용하는 예제를 찾아 실행해 보고 코드를 설명하시오.
- 인터넷에서 함수의 매개변수에 void 포인터를 활용하는 예제를 찾아 실행해 보고 코드를 설명하시오.
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[20];
	int score;
} Student;

int compare_by_score(const void *a, const void *b) {
	Student *studentA = (Student *)a;
	Student *studentB = (Student *)b;
	return studentB->score - studentA->score; // 성적이 높은 순
}

int compare_by_name(const void *a, const void *b) {
	Student *studentA = (Student *)a;
	Student *studentB = (Student *)b;
	return strcmp(studentA->name, studentB->name); // 이름 사전순
}

void print_students(Student arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%s: %d점\n", arr[i].name, arr[i].score);
	}
	printf("\n");
}

int main() {
	Student list[3] = {
		{"김철수", 85},
		{"이영희", 95},
		{"박민수", 70}
	};
	int size = sizeof(list) / sizeof(list[0]);

	printf("=== 성적 높은 순 정렬 ===\n");
	qsort(list, size, sizeof(Student), compare_by_score);
	print_students(list, size);

	printf("=== 이름 사전 순 정렬 ===\n");
	qsort(list, size, sizeof(Student), compare_by_name);
	print_students(list, size);

	return 0;
}
```
- 실행 결과
	```
	=== 성적 높은 순 정렬 ===
	이영희: 95점
	김철수: 85점
	박민수: 70점
	
	=== 이름 사전 순 정렬 ===
	김철수: 85점
	박민수: 70점
	이영희: 95점
	```
- 소스 코드 설명
	- qsort의 매개 변수에 배열 주소, 요소 개수, 구조체 크기, 함수 포인터를 사용
		- main 함수에서 첫 번째 qsort 함수 호출 시 인자로 함수 주소 compare_by_score
		- 두 번째 qsort 함수 호출 시 인자로 함수 주소 compare_by_name
	- qsort 함수에서 기준점을 정하여 비교할 대상을 지정
		- 매개 변수로 받은 compare_by_ 함수를 호출하여
			- 두 대상의 구조체 배열의 원소 주소를 인자로
				- compare_by_ 함수에서 매개변수로 void 포인터로 받아 
					- 엄격한 컴파일러는 인수와 매개 변수의 자료형이 void로 같아야 함
						- 좀 더 엄격한 c++ 컴파일러 오류 E0167 및 C2664
							- "int (*)(const Student *a, const Student *b)" 형식의 인수가 "_CoreCrtNonSecureSearchSortCompareFunction" (aka "int (__cdecl *)(const void *, const void *)") 형식의 매개 변수와 호환되지 않습니다.
							- 'void qsort(void *,size_t,size_t,_CoreCrtNonSecureSearchSortCompareFunction)': 인수 4을(를) 'int (__cdecl *)(const Student *,const Student *)'에서 '_CoreCrtNonSecureSearchSortCompareFunction'(으)로 변환할 수 없습니다.
				- 강제 형 변환하여 Student 자료형의 멤버 변수에 접근
					- score 함수는 내림차순 정렬로 반환
						- 양수면 첫 번째 인자가 뒤
						- 음수면 두 번째 인자가 앞
					- name 함수는 오름차순 정렬 반환
						- strcmp 함수로 비교
							- 사전 앞에 오는 문자는 아스키코드 값이 작음
								- 음수면 첫 번째 인자가 앞
								- 양수면 두 번째 인자가 뒤
			- 반환 받은 양수 또는 음수에 따라 스왑