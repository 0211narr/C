#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float nN, aA, z;
	char r;

	printf("������ �Է��� �ּ���:");
	scanf("%f%c%f", &nN, &r, &aA);

	switch (r) 
	{
	case '+':   z = nN + aA; break;
	case '-':   z = nN - aA; break;
	case '*':   z = nN * aA; break;
	case '/':   z = nN / aA; break;
	}

	printf("��� ���� %.3f�Դϴ�", z);
}