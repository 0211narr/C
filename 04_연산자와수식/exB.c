//#define _CRT_SECURE_NO_WARNINGS
#pragma warning ( disable : 4996 )

#include <stdio.h>

void main()
{
	////////////////과제1
	int a, b, c, e, f;

	a = 0;
	b = 5;
	c = 10;

	//c가 b보다 크면 e는 35, 아니면 70
	//e= c > b? 5*11-10*2:10*5+10*2;
	//c는 11, e는 35
	e = c > b ? b * ++c - 10 * 2 : c-- * b + 10 * 2;
	
	//c가 10과 같으면 f는 40, 아니면 75
	//f=10==c?5*12-10*2:11*5+10*2;
	//c는 11, f는 75
	f = 10 == c ? b * ++c - 10 * 2 : c-- * b + 10 * 2;

	printf("e= %d\n", e);
	printf("f= %d\n", f);
	////////////////////////////////////////////////



	////////////////과제2
	int na[4] = { 1,2,3,4 };
	int rr[4] = { 5,6,7,8 };
	float so[4] = { 1.1f,1.2f,1.3f,1.4f };
	float yo[4] = { 2.1f,2.2f,2.3f,2.4f };
	
	int mom[4];
	float dad[4];

	scanf("%d %d %d %d %d %d %d %d", &na[0], &na[1], &na[2], &na[3],&rr[0], &rr[1], &rr[2], &rr[3]);
	scanf("%f %f %f %f %f %f %f %f", &so[0], &so[1], &so[2], &so[3], &yo[0], &yo[1], &yo[2], &yo[3]);


	mom[0] = na[0] + rr[0];
	mom[1] = na[1] - rr[1];
	mom[2] = na[2] * rr[2];
	mom[3] = na[3] / rr[3];

	dad[0] = so[0] + yo[0];
	dad[1] = (int)so[1] - (int)yo[1];
	dad[2] = so[2] * yo[2];
	dad[3] = so[3] / yo[3];

	printf("mom[0]=%d\n", mom[0]);
	printf("dad[1]=%f\n", dad[1]);

	//(na[0] + rr[0]) + (na[1] - rr[1]) + (na[2] * rr[2]) + (na[3] / rr[3]);
	//(so[0] + yo[0]) + (so[1] - yo[1]) + (so[2] * yo[2]) + (so[3] / yo[3]);
	
	////////////////////////////////////////////////



	////////////////과제3
	e = c != a ? b * ++b / 2 : b * c / b + 8;
	printf("e=%d", e);
}
