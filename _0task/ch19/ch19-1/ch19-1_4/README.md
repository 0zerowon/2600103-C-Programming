- 20장 도전 문제 중에서 3문제만 골라서 푸시오.
	- 도전 3
	- 도전 4
	- 도전 6

# 소스 코드 설명
## 도전 3
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	printf("난수의 범위: 0부터 99까지\n");
	for (i = 0; i < 5; i++)
	{
		printf("난수 출력: %d\n", rand() % 100);
	}
}
```

## 도전 4
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i;

	srand((int)time(NULL));
	for (i = 1; i <= 2; i++)
	{
		printf("주사위 %d의 결과 %d\n", i, rand() % 6 + 1);
	}
}
```

## 도전 6
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

#include <stdlib.h>
#include <time.h>

#include <stdbool.h>

int main()
{
	unsigned short i, j;
	unsigned short comNums[3] = { 0 };
	unsigned short usrNums[3] = { 0 };
	unsigned short strike, ball, attemp = 0;

	srand((unsigned int)time(NULL));
	for (i = 0; i < 3; i++)
	{
		bool isDuplicate = 0;
		do
		{
			comNums[i] = rand() % 10;

			for (j = 0; j < i; j++)
			{
				if (comNums[i] == comNums[j])
				{
					isDuplicate = true;
					break;
				}
			}
		}
		while (isDuplicate);
	}

	printf("숫자 야구!\n\n");
	while (1)
	{
		strike = 0;
		ball = 0;

		printf("\n\n세 개 숫자 입력: ");
		scanf("%hu %hu %hu", &usrNums[0], &usrNums[1], &usrNums[2]);

		for (i = 0; i < 3; i++)
		{
			if (usrNums[i] == comNums[i])
			{
				strike++;
			}

			for (j = 0; j < 3; j++)
			{
				if (i != j && usrNums[i] == comNums[j])
				{
					ball++;
				}

			}
		}

		printf("\n%d번째 도전 결과: ", ++attemp);
		printf("%d 스트라이크! %d 볼!\n", strike, ball);
		if (strike >= 3)
		{
			break;
		}
	}
	printf("\n\n\n끝!");
}
```

# 실행 결과
## 도전 3
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/76163207-ffa7-453a-a1d1-f6a53ee7002b" />

## 도전 4
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/6d65d159-6991-4172-8d6a-f2dae0a16695" />

## 도전 6
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/4f46cc8f-d947-43a3-8b44-94676649f258" />
