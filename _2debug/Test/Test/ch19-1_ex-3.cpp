#include<stdio.h>
#include<stdlib.h>
int compare1(const int* a, const int* b);
int compare2(const int* a, const int* b);
int main() {
	int data[10] = { 21, 10, 41, 33, 25, 17, 68, 27, 14, 29 };
	qsort(data, 10, sizeof(int), compare1); //오름차순
	for (int i = 0; i < 10; i++) printf("%d ", data[i]);
	printf("\n");
	qsort(data, 10, sizeof(int), compare2); //내림차순
	for (int i = 0; i < 10; i++) printf("%d ", data[i]);
	return 0;
}
int compare1(const int* a, const int* b)
{
	return (*a - *b);//오름차순
}
int compare2(const int* a, const int* b)
{
	return (*b - *a);//내림차순
}
