- 예제 7번에서 스왑 부분을 함수로 구현하시오.
- 아래 코드에서 나머지 부분을 완성하라.
```c
int main(void)
{
	Point pos1 = { 1, 2 };
	Point pos2 = { 3, 4 };
	Point temp;
	printf("pos1: [%d, %d], pos2: [%d, %d]\n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
	swap_struct(pos1,pos2);
	printf("pos1: [%d, %d], pos2: [%d, %d]\n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
	return0;
}
```
```
pos1: [1, 2], pos2: [3, 4]
pos1: [3, 4], pos2: [1, 2]

```