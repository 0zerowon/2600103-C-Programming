//// 2차원 평면위의 점의 좌표
//struct point {
//	int x;			// x 좌표
//	int y;			// y 좌표
//};
//
//// 복소수(a + b * j )
//struct complex {
//	double real;	// 실수부
//	double imag;	// 허수부
//};
//
//// 날짜(년, 월 ,일)
//struct date {
//	int month;
//	int day;
//	int year;
//};
//
//// 사각형 정보
//struct rectangle {
//	int x;			// 좌측 상단 x좌표
//	int y;			// 우측 하단 y좌표
//	int width;		// 폭
//	int height;		// 높이
//};
//
//// 원(중심 좌표, 반지름)
//struct circle {
//	int x;
//	int y;
//	int radius;
//};
//
//// 직원(이름, 나이, 성별, 월급)
//struct employee {
//	char name[20];	// 이름
//	int age;		// 나이
//	int gender;		// 성별
//	int salary;		// 월급
//};
//

// 연속적으로 할당
struct student
{
	int number;
	char name[10];
	double grade;
} s;

#include <string.h>

int main()
{
	s.number = 2600103;
	struct student s2 = { 2600001, "홍길동", 4.5 };
	//s2.name = "송영원";
	strcpy(s2.name, "송영원");
}