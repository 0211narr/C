#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float nN, aA, z;
	char r;

	printf("������ �Է��� �ּ���:");
	scanf("%f%c%f", &nN,&r,&aA);

	if (r == '+')
	{
		z = nN + aA;
	}
	else if (r == '-')
	{
		z = nN - aA;
	}
	else if (r == '*')
	{
		z = nN * aA;
	}
	else if (r == '/')
	{
		z = nN / aA;
	}
		
		printf("��� ���� %.3f �Դϴ�",z);

	
}