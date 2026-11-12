// union (공용체): 크기가 가장 큰 멤버 변수만 메모리 할당, 나머지는 공유

//16진수 1자리는 4비트
//int a = 0x12345678
//			MSB	  LSB(Least significant byte): 덜 중요
//0x78		0x56		0x34		0x12		//리틀엔디안 방식: 인텔 cpu
//100번지	101번지		102번지		103번지

// 하나의 메모리 공간을 2개 이상의 방식으로 접근 가능함
typedef struct dbshort
{
	unsigned short upper;
	unsigned short lower;
} DBShort;
typedef union rdbuf
{
	int iBuf;
	char bBuf[4];
	DBShort sBuf;
} RDBuf;

// 열거형: 특정 멤버 상수만 갖을 수 있는 기호 상수, 열거형 상수만 모음
// 상수값을 명시하지 않으면 0부터 1씩 증가하면서 할당
enum color { RED, BLUE, WHITE, BLACK }; // 0,1,2,3
enum color { RED = 0, BLUE = 1, WHITE = 2, BLACK = 3 };
enum color { RED = 3, BLUE, WHITE = 6, BLACK };	// 3,4,6,7
enum color { RED = 3, BLUE = 4, WHITE = 6, BLACK = 7 };
typedef enum color { RED, BLUE, WHITE, BLACK } COLOR;

COLOR cR = RED;