#pragma warning(disable:4996)

#include <stdio.h>
#include <time.h> //time
#include <stdlib.h> //rand
#include <conio.h> //getch


void main()
{
	srand((unsigned)time(NULL));

	int nRan = rand() % 20 + 1;   //1~20
	int i=0; //�Է��� ����
	int score=10; //����
	int count; //�õ� Ƚ��


	printf("�ƹ� Ű�� ������ ���� �߻�(1~20)");
	getch();
	printf("\n\n");

	for(count=4;count<=4,count>=0;count--)
	{
			printf("\n���� �Է�(1~20):");
			scanf("%d", &i);
			printf("\n");
			if (i == nRan)
			{
				printf("�����Դϴ�.\n"
					"����:%d��\n", score);
				score = score + 10;
				--count;
			}
			else if (i < nRan)
			{
				printf("�Է��� ���ں��� Ů�ϴ�.\n");
				--count;
			}
			else if (i > nRan)
			{
				printf("�Է��� ���ں��� �۽��ϴ�.\n");
				--count;
			}
	} 
}