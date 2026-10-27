// stdin, stdout, stderr: 표준 스트림의 주소, 자료형: FILE*

#include <stdio.h>

int main()
{
	int ch = 'A';
	char str[10] = "hello";

	// 오류 발생 시 EOF 반환: -1		End Of File
	putchar(ch);		// int putchar(int c);
	fputc(ch, stdout);	// int fputc(int c, FILE* stream);
	// 오류 발생하거나 ctrl-z이 입력되면 EOF
	ch = getchar();		// int getchar(void);
	ch = fgetc(stdin);	// int fgetc(FILE* stream);

	// 성공시 음수가 아닌 값을 반환, 오류 발생시 EOF(-1)를 반환
	puts(str);			// int puts(cost char* s);			'\0'을 '\n'으로 변경하여 출력
	fputs(str, stdout);	// int fputs(const char* s, FILE* stream);

	// 정상동작시 인자를 그대로 리턴, 오류시 NULL((void*)0)를 리턴
	//gets(str);			// char* gets(const char* str);		'\n'를 읽어서 '\0'를 저장

	// 정상동작시 str를 리턴, 파일 끝을 만나거나 오류시 NULL((void*)0)을 리턴
	fgets(str, sizeof(str), stdin);		// char* fgets(const char* str, int n, FILE* stream);		'\n'를 읽어서 저장, 마지막 '\0'문자 저장
}