#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void MenuSelect(unsigned short* menu, short* a, short* b);
void Calculator(unsigned short usrInput, short a, short b);
void PrintResult(short (*calRes)(short, short), short a, short b);
short Add(short a, short b);
short Sub(short a, short b);
short Mul(short a, short b);
short Div(short a, short b);

int main()
{
	unsigned short usrMenuSelection = 0;
	short decA, decB;

	MenuSelect(&usrMenuSelection, &decA, &decB);
	Calculator(usrMenuSelection, decA, decB);
}

void MenuSelect(unsigned short* menu, short* a, short* b)
{
	printf("¿¬»êÀ» ¼±ÅÃÇÏ½Ã¿À(1: µ¡¼À, 2: »¬¼À, 3: °ö¼À, 4: ³ª´°¼À): ");
	scanf("%hu", menu);
	printf("µÎ °³ÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À: ");
	scanf("%hd %hd", a, b);
}

void Calculator(unsigned short usrMenuInput, short a, short b)
{
	//short res = 0;

	switch (usrMenuInput)
	{
		case 1:
		{
			//res = a + b;
			PrintResult(Add, a, b);
			break;
		}
		case 2:
		{
			//res = a - b;
			PrintResult(Sub, a, b);
			break;
		}
		case 3:
		{
			//res = a * b;
			PrintResult(Mul, a, b);
			break;
		}
		case 4:
		{
			//res = a / b;
			PrintResult(Div, a, b);
			break;
		}
	}

	//printf("°á°ú °ª: %hd", res);
}

void PrintResult(short(*calRes)(short, short), short a, short b)
{
	short res = calRes(a, b);

	printf("°á°ú °ª: %hd", res);
}

short Add(short a, short b)
{
	return a + b;
}

short Sub(short a, short b)
{
	return a - b;
}

short Mul(short a, short b)
{
	return a * b;
}

short Div(short a, short b)
{
	return a / b;
}
