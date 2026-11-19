//#include <stdio.h>
//int main(void)
//{
//	FILE* src = fopen("src.txt", "rt");
//	FILE* des = fopen("des.txt", "wt");
//	int ch;
//	if (src == NULL || des == NULL) { puts("파일오픈 실패!"); return -1; }
//	while ((ch = fgetc(src)) != EOF)
//		fputc(ch, des);
//	if (feof(src) != 0) puts("파일복사 완료!"); //파일 끝에 도달
//	else puts("파일복사 실패!"); //오류 발생
//	fclose(src);
//	fclose(des);
//	return 0;
//}

#include <stdio.h>
int main(void)
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	char str[20];
	if (src == NULL || des == NULL) {
		puts("파일오픈 실패!"); return -1;
	}
	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);
	if (feof(src) != 0) puts("파일복사 완료!");
	else puts("파일복사 실패!");
	fclose(src);
	fclose(des);
	return 0;
}