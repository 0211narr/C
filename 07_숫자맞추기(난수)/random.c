//#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> //rand()
#include <conio.h> //getch()
#include <time.h> //time()

void main()
{
	srand((unsigned)time(NULL));
	
	int wNARR = rand() % 10 + 1; //����
	int ss; //�Է��� ��

	printf("space bar�� ������ ������ �߻��մϴ� (1~10)");
	getch();
	printf("\n\n");

	//wNARR = rand() % 10 + 1;


	printf("���� �Է�:");
	scanf("%d", &ss);


	if (wNARR == ss)
	{
		printf("\n");
	}
	else if (wNARR < ss)
	{
		printf("%d���� �۽��ϴ�\n", ss);
	}
	else if (wNARR > ss)
	{
		printf("%d���� Ů�ϴ�\n", ss);
	}

	printf("������:%d", wNARR);

}