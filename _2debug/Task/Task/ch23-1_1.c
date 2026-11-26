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
void put_data(ST* s);
int main()
{
	ST s1;
	
	get_data(&s1);
	get_data(&s1);
}

void get_data(ST* s)
{
	fputs("학번을 입력하시오: ", stdout);
	scanf("%d", s->id);
	fputs("이름을 입력하시오: ", stdout);
	scanf("%s", &(s->name));
	fputs("주소를 입력하시오: ", stdout);
	fgets(s->address, sizeof(s->address), stdin);
}

void put_data(ST* s)
{
	printf("1. 학번: %d\n", s->id);
	printf("2. 이름: %s\n", s->name);
	printf("3. 학번: %s", s->address);
}
