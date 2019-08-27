#pragma warning(disable:4996)

#include <stdio.h>
#include <time.h> //time
#include <stdlib.h> //rand
#include <conio.h> //getch


void main()
{
	srand((unsigned)time(NULL));

	int nRan = rand() % 20 + 1;   //1~20
	int i=0; //입력할 숫자
	int score=10; //점수
	int count; //시도 횟수


	printf("아무 키를 누르면 난수 발생(1~20)");
	getch();
	printf("\n\n");

	for(count=4;count<=4,count>=0;count--)
	{
			printf("\n숫자 입력(1~20):");
			scanf("%d", &i);
			printf("\n");
			if (i == nRan)
			{
				printf("정답입니다.\n"
					"점수:%d점\n", score);
				score = score + 10;
				--count;
			}
			else if (i < nRan)
			{
				printf("입력한 숫자보다 큽니다.\n");
				--count;
			}
			else if (i > nRan)
			{
				printf("입력한 숫자보다 작습니다.\n");
				--count;
			}
	} 
}