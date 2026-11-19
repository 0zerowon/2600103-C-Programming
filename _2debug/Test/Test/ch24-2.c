#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	char str[20] = "hello";
//	FILE* fp = fopen("data.txt", "wt");
//	if (fp == NULL) { puts("파일오픈 실패!"); return -1; }
//	fputs(str, fp); // 문자열str을 fp에 출력
//
//	fp = fopen("data.txt", "rt");
//	if (fp == NULL) { puts("파일오픈 실패!"); return -1; }
//	fgets(str, sizeof(str), fp);
//	fputs(str, stdout);
//}

//fgets
//(n - 1)개의 문자를 읽을 때까지 또는 첫번째 줄바꿈 문자(‘\n’)를 만날 때까
//지 또는 스트림의 끝을 만날 때까지 문자열을 읽어 저장하고 줄바꿈 문자
//를 만나면 문자열에 저장함

// printf
// 서식 문자열로 변환하여 문자열로

//int fscanf(FILE* stream, const char* format, ...);
//stream이 가리키는 입력 스트림에서 format이 가리키는 서식 문자열에
//맞게 변수에 저장->파일에 저장된 문자열을 정수나 실수 등 숫자 데이
//터로 변환하여 저장
//중요:% c, % d 앞에 공백은 구분문자(공백, 탭, 줄바꿈)를
//무시하도록 함, 10뒤에 구분문자가 없지만 파일 끝을 만나서 종료
int main() {
	char name[20]; // 텍스트 데이터
	char gender; // 텍스트 데이터
	int age; // 바이너리 데이터
	FILE* fp = fopen("data.txt", "rt");
	fscanf(fp, "%s %c %d", name, &gender, &age);

}

//int feof(FILE* stream);
//파일 끝을 만나거나 오류가 발생한 경우에 EOF or NULL을 반환