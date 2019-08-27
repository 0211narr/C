#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float nN, aA, z;
	char r;

	printf("계산식을 입력해 주세요:");
	scanf("%f%c%f", &nN, &r, &aA);

	switch (r) 
	{
	case '+':   z = nN + aA; break;
	case '-':   z = nN - aA; break;
	case '*':   z = nN * aA; break;
	case '/':   z = nN / aA; break;
	}

	printf("결과 값은 %.3f입니다", z);
}