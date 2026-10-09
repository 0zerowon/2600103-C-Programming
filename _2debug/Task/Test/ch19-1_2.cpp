#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    int score;
} Student;

// 1. 성적 내림차순 비교 함수 (함수 포인터용)
int compare_by_score(const Student* a, const Student* b) {
    Student* studentA = (Student*)a;
    Student* studentB = (Student*)b;
    return studentB->score - studentA->score; // 성적이 높은 순
}

// 2. 이름 오름차순 비교 함수 (함수 포인터용)
int compare_by_name(const void* a, const void* b) {
    Student* studentA = (Student*)a;
    Student* studentB = (Student*)b;
    return strcmp(studentA->name, studentB->name); // 이름 사전순
}

// 배열 출력 함수
void print_students(Student arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s: %d점\n", arr[i].name, arr[i].score);
    }
    printf("\n");
}

int main() {
    Student list[3] = {
        {"김철수", 85},
        {"이영희", 95},
        {"박민수", 70}
    };
    int size = sizeof(list) / sizeof(list[0]);

    // qsort(배열주소, 요소개수, 요소크기, 함수포인터)
    printf("=== 성적 높은 순 정렬 ===\n");
    qsort(list, size, sizeof(Student), compare_by_score);
    print_students(list, size);

    printf("=== 이름 사전 순 정렬 ===\n");
    qsort(list, size, sizeof(Student), compare_by_name);
    print_students(list, size);

    return 0;
}
