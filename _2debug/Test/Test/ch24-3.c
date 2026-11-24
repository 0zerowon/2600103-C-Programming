#include <stdio.h>
//size_t fwrite(const void* buffer, size_t size, size_t count, FILE* stream);
// buffer : 파일에 출력할 데이터가 저장된 메모리의 주소
// size : 파일에 저장할 데이터의 자료형의 크기(int ->4, double ->8): 참조할 크기
// count : 파일에 저장할 데이터의 개수
// stream : 스트림 주소
// 반환값 : 성공시 전달인자 count, 오류시 count보다 작은 값 반환
//int main()
//{
//	int buf[7] = { 1, 2, 3, 4, 5, 6, 7 };
//	FILE* fp = fopen("src.bin", "wb");
//	fwrite((void*)buf, sizeof(int), 7, fp);
//
//}
//size_t fread( void *buffer, size_t size, size_t count, FILE *stream );
// buffer : 파일에서 읽은 데이터를 저장할 메모리 주소
// size : 파일에서 읽을 데이터의 자료형의 크기(int -> 4, double ->8)
// count : 파일에서 읽을 데이터의 개수
// stream : 스트림 주소
// 반환값 : 성공시 전달인자 count, 오류 또는 파일 끝에 도달시 count보다 작은값 반환
//int main()
//{
//	int buf[7];
//	FILE* fp = fopen("src.bin",	"rb");
//	fread((void*)buf, sizeof(int), 7, fp);
//
//}