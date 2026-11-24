//#include <stdio.h>
//int main(void)
//{
//	int wbuf[7] = { 1,2,3,4,5,6,7 };
//	FILE* src = fopen("src.bin", "wb");
//	if (src == NULL) { puts("파일오픈 실패!"); return -1; }
//	fwrite((void*)wbuf, sizeof(int), 7, src);
//	fclose(src);
//	return 0;
//}
#include <stdio.h>
int main(void)
{
	FILE* src = fopen("src.bin", "rb");
	int rbuf[7], i;
	if (src == NULL) { puts("파일오픈 실패!"); return -1; }
	fread((void*)rbuf, sizeof(int), 7, src);
	for (i = 0; i < 7; i++) printf("%d ", rbuf[i]);
	fclose(src);
	return 0;
}