#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	FILE* input = fopen("input.txt", "rt");
	FILE* output = fopen("output.txt", "wt");
	char name[3][10];
	int score[3][3];
	int totalScore[3] = { 0,0,0 };
	float avgScore[3];

	for (int i = 0; i < 3; i++)
	{
		if (fgets(name[i], 7, input) != NULL)
		{
			fgetc(input);

		}
		else
		{
			fputs("fgets error", stderr);

			return -1;
		}

		for (int j = 0; j < 3; j++)
		{
			if (fscanf(input, "%d", &score[i][j]) != EOF)
			{
				totalScore[i] += score[i][j];

			}
			else
			{
				fputs("fscanf error", stderr);

				return -1;
			}
		}
		fgetc(input);

		avgScore[i] = totalScore[i] / 3.0f;

		fprintf(output, "%s %d %.1f\n", name[i], totalScore[i], avgScore[i]);

	}
		
	fclose(input);
	fclose(output);
}