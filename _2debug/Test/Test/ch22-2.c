#include <stdio.h>
#include <string.h>

struct date
{
	int year;
	int month;
	int day;
};

struct student						// 구조체 정의
{
	int number;
	char name[20];
	double grade;
	struct date dob;				// student 안에 dob
};

int main()
{
	struct student list[100];		// 구조체의 배열 선언
	struct student s1;
	struct student* pL = list;		// 
	struct student* pS1 = &s1;		// 첫 번째 멤버 변수와 주소가 같지만 포인터 연산은 자료형 크기 만큼 증가하여 &s1.number의 포인터 연산은 다름

	list[0].number = 27;			// 첫번째 배열요소에 값대입
	list[0].grade = 178.0;
	s1.dob.year = 1983;
	s1.dob.month = 03;
	s1.dob.day = 29;

	strcpy(list[0].name, "홍길동");

	printf("학번:%d 이름:%s 학점:%lf \n", s1.number, s1.name, s1.grade);
	printf("학번:%d 이름:%s 학점:%lf \n", pS1->number, pS1->name, pS1->grade);
	printf("학번:%d 이름:%s 학점:%lf \n", (*pS1).number, (*pS1).name, (*pS1).grade);
}