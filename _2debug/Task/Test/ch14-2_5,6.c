#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

//void ShowAllData(const int* arr, int len)
//{
//	int i;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}

//int binary[16];
//
//int main()
//{
//	int intInput;
//
//	printf("10진수 정수 입력: ");
//	scanf("%d", &intInput);
//
//	for (int i = 0; intInput > 0; i++)
//	{
//		binary[i] = intInput % 2 ? 1 : 0;
//		intInput /= 2;
//	}
//
//	for (int i = sizeof(binary) / sizeof(int) - 1; i >= 0; i--)
//	{
//		printf("%d", binary[i]);
//	}
//	
//}

int main()
{
	char str[100];
	int i = 0;

	printf("문자열 입력: ");
	scanf("%s", str);

	while (str[i] != '\0')
	{
		i++;
	}

	if (str[i / 2 - 1] == str[i / 2 + 1])
	{
		printf("회문입니다.");
	}
	else if (str[i / 2 - 1] == str[i / 2])
	{
		printf("회문입니다.");
	}
	else
	{
		printf("회문이 아닙니다.");
	}
}