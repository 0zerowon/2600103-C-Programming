#pragma warning(disable:6031)

#define _CRT_SECURE_NO_WARNINGS

#define EXE_RATE 3.141592

#include <stdio.h>

int main()
{
    int userExpPacket = 0;
    double userExpRate = 0.0;

    int userContrib = 0;

    int* pExpPacket = &userExpPacket;
    double* pExpRate = &userExpRate;

    printf("유저의 기여도에 따라 exp 비율 결정(10-100): ");
    scanf("%d", &userContrib);

    *pExpPacket = EXE_RATE * userContrib;
    *pExpRate = (double)*pExpPacket / userContrib;

    printf("전송된 정수 exp 패킷 값: %d\n", *pExpPacket);
    printf("복원된 실수 exp 값: %f\n", *pExpRate);
}