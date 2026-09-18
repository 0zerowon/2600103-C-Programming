// **********************************************
// 제 목: apple, blueberry, orange, melon 중 사전순으로 가장 앞에 오는 문자열을 찾기
// 날 짜: 2026년 9월 17일
// 작성자: 2600103 송영원
// **********************************************

#include <stdio.h>

int main()
{
	char* fruits[] = { "apple", "blueberry", "orange", "melon" };
	char* firstString = { "first" };

	int n = sizeof(fruits) / sizeof(fruits[0]);

	for (int i = 0; i < n-1; i++)
	{
		if(fruits[i][0] < firstString[0])
		{
			firstString = fruits[i];
		}
	}
	
	printf("사전순으로 가장 앞에 오는 문자열: %s", firstString);
}