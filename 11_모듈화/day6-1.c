#pragma warning(disable:4996)

#include <stdio.h>
#include "max.h"
#include "min.h"
#include "sum.h"
#include "floatsum.h"


void main()
{
	int a, b, tt;	

	printf("두 수를 입력하세요:");
	scanf("%d %d", &a, &b);

	tt = Max(a, b);
	printf("큰 값은 %d입니다.\n", tt);

	tt = Min(a, b);
	printf("작은 값은 %d입니다.\n", tt);

	tt = Sum(a, b);
	printf("두 수의 합은 %d입니다.\n", tt);

	tt = FloatSum(a, b);
	printf("두 수의 합은 %f입니다.\n", tt);
}

