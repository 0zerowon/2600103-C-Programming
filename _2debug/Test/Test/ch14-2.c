//{
//	int main()
//	{
//		int num = 20;
//		const int* ptr = &num;
//		//*ptr = 30; //컴파일 에러
//		num = 40; //정상
//	}
//	
//	int main()
//	{
//		int num = 20;
//		const int* ptr = &num;
//		//*ptr = 30; //컴파일 에러
//		num = 40; //정상
//	}
//	
//	int main()
//	{
//		int num1 = 20, num2 = 30;
//		const int* const ptr = &num1;
//		ptr = &num2; //컴파일 에러
//		*ptr = 40; //컴파일 에러
//	}
//}