#pragma warning(disable:4996)

#include <stdio.h>
#include "max.h"
#include "min.h"
#include "sum.h"
#include "floatsum.h"


void main()
{
	int a, b, tt;	

	printf("�� ���� �Է��ϼ���:");
	scanf("%d %d", &a, &b);

	tt = Max(a, b);
	printf("ū ���� %d�Դϴ�.\n", tt);

	tt = Min(a, b);
	printf("���� ���� %d�Դϴ�.\n", tt);

	tt = Sum(a, b);
	printf("�� ���� ���� %d�Դϴ�.\n", tt);

	tt = FloatSum(a, b);
	printf("�� ���� ���� %f�Դϴ�.\n", tt);
}

