#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
// 실습과제1
/*
void main() {
	int r,n1,n, max, min;
	printf("정수를 몇번 입력하시겠습니까\n");
	scanf("%d", &r);
	printf("1번째 정수를 입력하시오\n");
	scanf("%d", &n1);
	max = n1;
	min = n1;
	for (int i = 1;i < r;i++) {
		printf("%d번째 정수를 입력하시오\n", i + 1);
		scanf("%d", &n);
		if (max < n) {
			max = n;
		}
		else if (min > n) {
			min = n;
		}
	}
	printf("최대값: %d, 최소값: %d\n", max, min);
}*/

// 실습과제2
/*
void main() {
	int r, n, total=0;
	printf("입력 받을 정수의 총수를 입력하시오\n");
	scanf("%d", &r);
	for (int i = 1;i <= r;i++) {
		printf("%d번째 정수를 입력하시오\n", i);
		scanf("%d", &n);
		total += n;
	}
	printf("총합: %d, 평균: %.1lf\n", total, (float)total / r);
}*/

// 실습과제3
/*
void main() {
	int sn, en, cnt=0, jto=0, hto=0, jcnt=0, hcnt=0;
	float javg = 0, havg = 0;
	printf("양의 정수 2개를 입력하시오\n");
	scanf("%d %d", &sn, &en);
	if (sn > en) { 
		int tmp = sn;
		sn = en;
		en = tmp;
	}
	for (int j = sn + 1;j < en;j++) {
		if (j % 2 == 0) {
			jto += j;
			jcnt++;
		}
		else if (j % 2 == 1) {
			hto += j;
			hcnt++;
		}
	}
	if (jcnt == 0) javg = 0;
	else javg = (float)jto / jcnt;
	printf("%d과(와) %d 사이의 짝수의 합: %d, 짝수의 평균: %.1lf\n", sn, en, jto, javg);

	if (hcnt == 0) havg = 0;
	else havg = (float)hto / hcnt;
	printf("%d과(와) %d 사이의 홀수의 합: %d, 홀수의 평균: %.1lf\n", sn, en, hto, havg);
}*/

// 실습과제4
/*
void main() {
	int n, cnt1=0, cnt0=0;
	printf("정수를 1개 입력하시오\n");
	scanf("%d", &n);

	for (int i = 0;i < 32;i++) {
		if ((n >> i) & 1) 
			cnt1++;
		else cnt0++;
	}
	printf("%d에 포함된 1의 개수: %d, 0의 개수: %d\n",n, cnt1, cnt0);
}*/

// 실습과제5

void main() {
	int i=2, n1, n, max, min;
	printf("1번째 정수를 입력하시오\n");
	scanf("%d", &n1);
	max = n1;
	min = n1;
	while (1) {
		printf("%d번째 정수를 입력하시오\n", i);
		scanf("%d", &n);
		if (n == 0) break;
		if (max < n) {
			max = n;
		}
		else if (min > n) {
			min = n;
		}
		printf("현재까지 최대값: %d, 최소값: %d\n", max, min);
		i++;
	}
}