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