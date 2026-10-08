#include <stdio.h>

////void func();
////void func2();
//void Func(int (*fP)(int, int));
//int sum(int a, int b); // 함수 선언
//double abs(double a, double b); // 함수 선언
//double (*fp2)(double) = abs; // 함수 포인터 선언
int Test();

int main()
{
	{
		//int (*fp1)(int, int); // 함수 포인터 선언
		//fp1 = sum;

		//printf("%p", fp1);
	}

	{
		/*int* fPP;
		int (*fP)();
		fP = Test;
		fPP = fP;
		printf("%d", fPP());*/
	}

	{
		//Func(sum);
		//Func(abs);
	}

	{
		//int in = 10; // int형 변수
		//void* vp = &in; // void포인터변수
		//printf("%d\n", *vp); // 오류
		//vp++; // 오류
		//*vp = 20; // 오류
		int in = 10; // int형 변수
		void* vp; // void포인터변수
		vp = &in; // int형 변수의 포인터를 저장
		printf("%d\n", *(int*)vp); // 형변환 후에 간접참조연산 가능
		vp = (int*)vp + 1; // 형변환 후에 정수덧셈가능
		*(int*)vp = 20;
	}
}

////void func()
////{
////	sum(1, 2);
////}
//
////void func2()
////{
////	abs(1, 2);
////}
//
//void Func(int (*fP)(int, int))
//{
//	fp(1, 2);
//}

//int Test()
//{
//	return 1;
//}

//int sum(int a, int b)
//{
//	return;
//}
//
//double abs(double a)
//{
//	return 0.0;	
//}

