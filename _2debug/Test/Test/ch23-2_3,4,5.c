//#include <stdio.h>
//typedef struct sbox // 구조체 sbox의 정의
//{
//	int mem1;
//	int mem2;
//	double mem3;
//} SBox;
//typedef union ubox // 공용체 ubox의 정의
//{
//	int mem1;
//	int mem2;
//	double mem3;
//} UBox;
//int main(void) {
//	SBox sbx;
//	UBox ubx;
//	printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
//	printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3);
//	printf("%d %d \n", sizeof(SBox), sizeof(UBox));
//	return 0;
//}

//#include <stdio.h>
//typedef union ubox // 공용체 ubox의 정의
//{
//	char mem1[4];
//	int mem2;
//} UBox;
//int main(void)
//{
//	UBox ubx; // 8바이트 메모리 할당
//	ubx.mem2 = 0x12345678;
//	printf("%x\n", ubx.mem2);
//	printf("%p,%x\n", &ubx.mem1[0], ubx.mem1[0]);
//	printf("%p,%x\n", &ubx.mem1[1], ubx.mem1[1]);
//	printf("%p,%x\n", &ubx.mem1[2], ubx.mem1[2]);
//	printf("%p,%x\n", &ubx.mem1[3], ubx.mem1[3]);
//	return 0;
//}


//#include <stdio.h>
//typedef union ubox // 공용체 ubox의 정의
//{
//	int mem1;
//	int mem2;
//	double mem3;
//} UBox;
//int main(void)
//{
//	UBox ubx; // 8바이트 메모리 할당
//	ubx.mem1 = 20;	// 나머지 4바이트는 쓰레기 값
//	printf("%d \n", ubx.mem2);
//	ubx.mem3 = 7.15;	// 같은 메모리에 대입
//	printf("%d \n", ubx.mem1);	// 정수로 아래 번지 4바이트 
//	printf("%d \n", ubx.mem2);
//	printf("%g \n", ubx.mem3);
//	return 0;
//}

