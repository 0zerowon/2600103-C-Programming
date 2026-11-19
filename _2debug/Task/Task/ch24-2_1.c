#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	FILE* result = fopen("result.txt", "wt");
	char name[3][10];
	int studentID[3];
	float score[3];

	for (int i = 0; i < 3; i++)
	{
		fputs("이름, 학번, 학점 입력: ", stdout);
		fscanf(stdin, "%s %d %g", &name[i][0], &studentID[i], &score[i]);
		
		fprintf(result, "%s %d %g\n", &name[i][0], studentID[i], score[i]);
	}

	fclose(result);
}