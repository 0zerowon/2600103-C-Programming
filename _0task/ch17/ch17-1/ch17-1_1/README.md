- 아래의 변수가 우측 그림처럼 메모리가 할당될 때 다음 표의 빈칸을 채우시오.

```
double num = 6.28;
double* ptr = &num;
double** dptr = &ptr;
```

| 주소 | 메모리 |
| :---: | :---: |
| 100 | num |
| 300 | ptr |
| 500 | dptr |

| 수식 | 결과 값 | 결과 값의 자료형 |
| :---: | :---: | :---: |
| ptr | 100 | double* |
| dptr | 300 | double** |
| &ptr | 300 | double** |
| &dptr | 500 | double*** |
| *ptr | 6.28 | double |
| *dptr | 100 | double* |
| **dptr | 6.28 | double |