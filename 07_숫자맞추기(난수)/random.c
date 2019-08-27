//#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> //rand()
#include <conio.h> //getch()
#include <time.h> //time()

void main()
{
	srand((unsigned)time(NULL));
	
	int wNARR = rand() % 10 + 1; //난수
	int ss; //입력할 수

	printf("space bar를 누르면 난수가 발생합니다 (1~10)");
	getch();
	printf("\n\n");

	//wNARR = rand() % 10 + 1;


	printf("숫자 입력:");
	scanf("%d", &ss);


	if (wNARR == ss)
	{
		printf("\n");
	}
	else if (wNARR < ss)
	{
		printf("%d보다 작습니다\n", ss);
	}
	else if (wNARR > ss)
	{
		printf("%d보다 큽니다\n", ss);
	}

	printf("난수는:%d", wNARR);

}