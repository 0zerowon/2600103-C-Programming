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
		ret = fscanf(fp, "%s%c%d", name, &gender, &age);
		if (ret == EOF) break;
		printf("%s %c %d \n", name, gender, age);
	}
	fclose(fp);
	return 0;
}
//% c 앞에 공백이 없으면 공백을 gender에 저장함
//% d는 숫자가 없기때문에 age에 저장하지 않고
//초기값인 쓰레기값 출력 두번째 반복부터는 M을
//name에 공백을 gender로 23을 age로 저장함