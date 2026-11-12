#include <stdio.h>
typedef enum syllable
{
	Do, Re, Mi, Fa, So, La, Ti
} Syllable;
void Sound(Syllable sy);
int main(void)
{
	Syllable tone;
	for (tone = Do; tone <= Ti; tone += 1)
		Sound(tone);
	return 0;
}
void Sound(Syllable sy)
{
	switch (sy)
	{
	case Do: puts("도는 하얀 도라지 ♪"); break;
	case Re: puts("레는 둥근 레코드 ♩"); break;
	case Mi: puts("미는 파란 미나리 ♩♪"); break;
	case Fa: puts("파는 예쁜 파랑새 ♪♭"); break;
	case So: puts("솔은 작은 솔방울 ♩♪♪"); break;
	case La: puts("라는 라디오고요~ ♪♩♭♩"); break;
	case Ti: puts("시는 졸졸 시냇물 ♩♭♩♪"); break;
	}
}