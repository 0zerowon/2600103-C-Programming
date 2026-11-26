#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>


typedef struct Student
{
	int id;
	char name[10];
	char address[20];
}ST;

void get_data(ST* s);
void put_data();
int main()
{
	ST s1;

	

	printf("1. 학번: %d\n", s1.id);
	printf("2. 이름: %s\n", s1.name);
	printf("3. 학번: %s", s1.address);

}

void get_data(ST* s)
{
	fputs("학번을 입력하시오: ", stdout);
	scanf("%d", &s1.id);
	fputs("이름을 입력하시오: ", stdout);
	scanf("%s", s1.name);
	fputs("주소를 입력하시오: ", stdout);
	fgets(s1.address, sizeof(s1.address), stdin);
}

void put_data()
{
}
