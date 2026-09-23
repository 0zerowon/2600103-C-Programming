#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

void Menu();

int CallByValue(int v);

void CallByPointer(int* v);



int num;

int main()
{
	Menu();

	// ¿ø·¡ while¹®
	{
		//while (usrChoose.smallNumber)
		//{
		//	printf("\n");
		//	printf("0: Exit / 1: Call by Value / 2: Call by Pointer / 3: Assign num / 4: Print num\n");
		//	scanf("%hd", &usrChoose.smallNumber);

		//	/*if (usrChoose.smallNumber == 0)
		//	{
		//		break;
		//	}*/

		//	if (usrChoose.smallNumber == 1)
		//	{
		//		num = CallByValue(num);
		//	}
		//	else if (usrChoose.smallNumber == 2)
		//	{
		//		CallByPointer(&num);
		//	}
		//	else if (usrChoose.smallNumber == 3)
		//	{
		//		printf("Assign num: ");
		//		scanf("%d", &num);
		//		printf("num = %d;\n", num);
		//	}
		//	else
		//	{
		//		printf("printf(\"num == %%d\\n\", num);\nnum = %d\n", num);
		//	}
		//}
	}
}

void Menu()
{
	const char* menuItems[] = { "Exit", "Call by Value", "Call by Pointer", "Assign num", "Print num" };
	struct SmallNumber
	{
		unsigned short smallNumber : 4;
	}
	maxOption = { .smallNumber = sizeof(menuItems) / sizeof(menuItems[0]) },
	usrChoose = { .smallNumber = 1 };

	printf("Init num: ");
	scanf("%d", &num);
	printf("int num = %d;\n", num);

	do
	{

		printf("\n");
		for (int i = 0; i <= maxOption.smallNumber; ++i)
		{
			if (i > 0) printf(" / ");
			printf("%d: %s", i, menuItems[i]);
		}
		printf("\n");

		scanf("%hd", &usrChoose.smallNumber);

		if (usrChoose.smallNumber < 0 || usrChoose.smallNumber > maxOption.smallNumber)
		{
			int ch;
			while ((ch = getchar()) != '\n' && ch != EOF) {}
			usrChoose.smallNumber = -1;
			continue;
		}

		switch (usrChoose.smallNumber)
		{
		case 0:
			break;
		case 1:
			num = CallByValue(num);
			break;
		case 2:
			CallByPointer(&num);
			break;
		case 3:
			printf("Assign num: ");
			if (scanf("%d", &num) == 1)
				printf("num = %d;\n", num);
			break;
		case 4:
			printf("printf(\"num == %%d\\n\", num);\nnum = %d\n", num);
			break;
		default:
			printf("Invalid selection.\n");
		}
	} while (usrChoose.smallNumber != 0);

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