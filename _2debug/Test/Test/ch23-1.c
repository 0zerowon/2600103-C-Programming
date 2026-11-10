#include <stdio.h>

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
} Person;

typedef struct point
{
	int xpos;
	int ypos;
} Point;

int main()
{
	Person man = { "이승기", "02 - 212 - 0001", 21 };
	
	func(man);
	

	// 구조체 변수는 대입(=) 연산, 주소연산(&), sizeof 연산만 가능, 다른 연산은 불가능: 멤버변수 단위로 연산을 처리해야함
	Point p1 = { 10, 20 };
	Point p2 = { 30, 40 };
	p2 = p1; // 대입 가능, p2.x = p1.x, p2.y = p1.y
	if (p1 == p2) 
		printf("p1와 p2이 같습니다."); // 비교 -> 컴파일 오류!!
	if ((p1.x == p2.x) && (p1.y == p2.y)) // 올바른 비교-> 멤버끼리는 가능
		printf("p1와 p2이 같습니다.")
}

// 함수 값에 의한 호출로 구조체 변수 값을 함수 매개변수로 전달: 구조체의 크기가 크면 메모리공간과 초기화 시간이 많이 필요
void func(Person v)
{
	
}

//대입(=) 연산을 제외한 나머지 연산(+, -, *, / 등)은 불가능하므로 함수
//로 직접 정의해야 함->멤버변수는 기본 자료형이므로 모든 연산
//이 가능함
//Point a, b, c;
//c = a + b; // error
//Point AddPoint(Point pos1, Point pos2);
//연산결과는 반환값으로 정의 피연산자는 매개변수로 선언
//실습과제3