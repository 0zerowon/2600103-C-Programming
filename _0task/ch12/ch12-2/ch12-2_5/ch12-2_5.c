// **********************************************
//		제	목: 여러가지 포인터 연산 출력
//		날	짜: 2026년 9월 9일
//		작성자: 2600103 송영원
// **********************************************

#include <stdio.h>

int main() 
{
    int a = 9, b = 10;
    int* p_a = &a;
    int* p_b = &b;

    printf("a: %d, b: %d\n", a, b);
    printf("&a: %p, &b: %p\n", &a, &b);

    *p_a = *p_b;
    p_a = p_b;
    (*p_a)++;

    if (*&p_b == p_a)
    {
        printf("*&p_b == p_a\n");
    }

    printf("a: %d, b: %d\n", a, b);
    printf("p_a: %p, p_b: %p\n", p_a, p_b);

}