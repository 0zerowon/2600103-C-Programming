// 텍스트 파일 
// 이진 파일
//스트림(FILE 구조체)를 가리키는 포인터를 파일 포인터(file pointer)
// 스트림은 소프트웨어적으로 구조체이며 스트림의 자료형 FILE
// 파일 열기-읽기쓰기-닫기: 표준 입출력과 다르게 파일 입출력에서는 수동으로

#include <stdio.h>
//FILE* fopen(const char* filename, const char* mode);
//filename: 스트림을 생성할 파일의 이름, “test.txt”
//mode : 생성할 스트림의 종류, “rt”, “wt”		// t: txt
//파일과 입출력을 위한 스트림을 정의하는 FILE 구조체 변수를 생성하고 그 변수의 주소를 리턴
//생성된 FILE 구조체 변수(스트림)에는 파일에 대한 정보가 저장됨
//FILE 구조체의 주소는 사실상 파일을 가리키는 포인터의 역할

//fopen 함수가 오픈할 파일을 찾는 경로는 프로젝트 디렉토리임
//"wt” 모드 : 프로젝트 디렉토리에 파일이 없으면 새로 생성
//“rt” 모드 : 프로젝트 디렉토리에 파일이 없으면 오류 발생
//파일의 절대경로를 직접 지정가능(경로 구분문자로 \\ or / 사용): 프로젝트 디렉토리에 없을 경우
//FILE* fp = fopen(“C:\\project\\data.txt", “wt");
// "\\":\

int main() {
	FILE* fp = fopen("data.txt", "wt");
	if (fp == NULL) {
		puts("파일오픈 실패!"); // 오류 메시지 출력
		return -1; // main함수(프로그램) 종료
	}
}

// 스트림을 해제(소멸, 제거)하는 함수, fopen 함수의 반대 기능
// 운영체제가 할당한 자원의 반환
// 버퍼에 저장된 데이터를 실제 파일에 출력
// fclose 함수가 호출되어야 스트림 생성 시 할당된 모든 리소스(자원)가 소멸이 됨->따라서 파일을 오픈된 상태로 두면 자원 손실 발생
//fclose함수가 호출되면 버퍼에 남아있는 데이터는 파일에 저장됨

// \r (carriage return)
// Windows -> \r\n
// Linux -> \n (line feed)

//	\r\n
//	data.txt
//FILE* fp = fopen("data.txt", "wt");
//fputc(‘\n', fp);		//\n ->\r\n
//FILE * fp = fopen("data.txt", “rt");
//ch = fgetc(fp);		//\n < -\r\n
