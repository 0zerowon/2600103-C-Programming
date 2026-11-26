//편집(소스 코드) 컴파일(오브젝트 파일) 링크 실행
// 링크: 작성한 소스 파일에서 라이브러리(.obj) 정의 연결
// 전처리기: 헤더 파일 포함 등 (선행 처리 명령문(#)) 소스 코드 변형
// const, define(매크로 상수), (literal)

#include <stdio.h>	// 컴파일러 제공 헤더(라이브러리) 파일 포함(선언)
int main()
{
	getch();
}

//#include <stdio.h>
//#define PI 3.14159
//int main()
//{
//	double radius;
//	printf("원의 반지름을 입력하세요 : ");
//	scanf("%lf", &radius);
//	printf("원 둘레: %lf\n", 2 * PI * radius);
//	printf("원 면적: %lf\n", PI * radius * radius);
//	return 0;
//}
//->
//…
//int __CRTDECL printf(char const* const _Format, ...);
//int __CRTDECL scanf(char const* const _Format, ...);
//…
//int main()
//{
//	double radius;
//	printf("원의 반지름을 입력하세요 : ");
//	scanf("%lf", &radius);
//	printf("원 둘레: %lf\n", 2 * 3.14159 * radius);
//	printf("원 면적: %lf\n", 3.14159 * radius * radius);
//	return 0;
//}