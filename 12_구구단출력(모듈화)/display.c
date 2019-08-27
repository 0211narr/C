#include "display.h"

extern int dan;

int Goo()
{
	int plus;

	if ((dan >= 2) && (dan <= 9))
	{
		for (plus = 1; plus <= 9; plus++)
		{
			printf("%d x %d = %d\n", dan, plus, dan*plus);
		}
	}
	return printf("\n단의 마지막 전 값:%d\n", dan * 8);
}