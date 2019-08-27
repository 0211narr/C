#pragma warning (disable:4996)

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
	srand((unsigned int)time(NULL));

	int slot1;
	int slot2;
	int slot3;
	int score;
	int count;

	

		//printf("Enter키를 누르면 작동합니다.");
		//getch();
		
	
	for (count = 5; count <= 5, count > 0; count--)
		{
			for (score = 50; score >= 0;)
			{
				slot1 = rand() % 10;
				slot2 = rand() % 10;
				slot3 = rand() % 10;

				printf("\n\n\t-------\n");
				printf("\t %d %d %d\n", slot1, slot2, slot3);
				printf("\t-------\n\n\n");
				system("cls");

				if (slot1 == 7 && slot2 == 7 && slot3 == 7)
				{
					score = score + 1000;
					printf("+1000점!! \n 점수:%d\n", score);
					--count;

				}
				else if (slot1 != slot2 && slot1 != slot3 && slot2 != slot3)
				{
					score--;
					printf("-1점! \n 점수:%d\n", score);
					--count;
				}
				else if (slot1 == slot2 == slot3)
				{
					score = score + 100;
					printf("+100점! \n 점수:%d\n", score);
					--count;
				}
				else if (slot1 == slot2 || slot1 == slot3 || slot2 == slot3)
				{
					score = score + 10;
					printf("+10점! \n 점수:%d\n", score);
					--count;
				}
				if (count <= 0 || score<0)
				{
					printf("\n\n\t\t최종점수:%d\n\n", score);
					printf("\t\tGAME OVER");
					break;
				}
			}
		}
}