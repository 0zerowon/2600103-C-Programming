#include <stdio.h>
int main(void)
{
	char name[10];
	char gender;
	int age;
	int ret;
	FILE* fp = fopen("friend.txt", "rt");
	if (fp == NULL) { puts("파일오픈 실패!"); return -1; }
	while (1)
	{
		ret = fscanf(fp, "%s %c %d", name, &gender, &age);
		if (ret == EOF) break;
		printf("%s %c %d \n", name, gender, age);
	}
	fclose(fp);
	return 0;
}

//% c, % d 앞에 공백은 구분문자(공백, 탭, 줄바꿈)를
//무시하도록 함
//% d 앞에는 공백이 없어도 문제없음->숫자는
//다른 문자와 구분문자 없어도 구분이 되기 때문