#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct UserInfo
{
	int classId;
	char name[10];
	char adress[18];
};

int main()
{
	struct UserInfo usrInfo;

	fputs("학번을 입력하시오: ", stdout);
	scanf("%d", &usrInfo.classId);
	getchar();

	fputs("이름을 입력하시오: ", stdout);
	scanf("%s", usrInfo.name);
	getchar();

	fputs("주소를 입력하시오: ", stdout);
	fgets(usrInfo.adress, sizeof(usrInfo.adress), stdin);
	getchar();

	putchar('\n');
	printf("1. 학번: %d\n", usrInfo.classId);
	printf("2. 이름: %s\n", usrInfo.name);
	fputs("3. 주소: ", stdout);
	fputs(usrInfo.adress, stdout);
}