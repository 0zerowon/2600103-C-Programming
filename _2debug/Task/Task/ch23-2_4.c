#include <stdio.h>
typedef union ubox // 공용체 ubox의 정의
{
	char mem1[4];
	int mem2;
} UBox;
int main(void)
{
	UBox ubx; // 8바이트 메모리 할당
	ubx.mem2 = 0x12345678;
	printf("%x\n", ubx.mem2);
	printf("%p,%x\n", &ubx.mem1[0], ubx.mem1[0]);
	printf("%p,%x\n", &ubx.mem1[1], ubx.mem1[1]);
	printf("%p,%x\n", &ubx.mem1[2], ubx.mem1[2]);
	printf("%p,%x\n", &ubx.mem1[3], ubx.mem1[3]);
	return 0;
}
