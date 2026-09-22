#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

int CallByValue(int v);

void CallByPointer(int* v);

int num;

int main()
{
	short usrChoose;

	printf("Init num: ");
	scanf("%d", &num);
	printf("int num = %d;\n", num);

	while (1)
	{
		printf("\n");
		printf("0: Exit / 1: Call by Value / 2: Call by Pointer / 3: Assign num / 4: Print num\n");
		scanf("%hd", &usrChoose);

		if (usrChoose == 0)
		{
			break;
		}

		if (usrChoose == 1)
		{
			num = CallByValue(num);
		}
		else if (usrChoose == 2)
		{
			CallByPointer(&num);
		}
		else if (usrChoose == 3)
		{
			printf("Assign num: ");
			scanf("%d", &num);
			printf("num = %d;\n", num);
		}
		else
		{
			printf("printf(\"num = %%d\\n\", num);\nnum = %d\n", num);
		}
	}
}

int CallByValue(int v)
{
	printf("num = CallByValue(num);\t\t// num = v * 100;\n");
	printf("int CallByValue(int v)\t\t// int v: int v = num;\n");
	printf("{\n");
	printf("\treturn v * 100;\n");
	printf("}\n");

	return v * 100;
}

void CallByPointer(int* p)
{
	printf("CallByPointer(&num);\n");
	printf("void CallByPointer(int* p)\t// int* p: int* p = &num;\n");
	printf("{\n");
	printf("\t*p *= 100;\t\t// *&num *= 100\n");
	printf("}\n");

	*p *= 100;
}
