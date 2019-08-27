#include <stdio.h>
#include <stdlib.h>

#define TRUE	1
#define FALSE	0

typedef int	BOOL;

typedef struct 
{
	BOOL	bIsLive;  // ���� ����
	int		nStr;     // ��
	int		nDamage;  // ���� ���� ����
	int		nLife;    // ����
} CHARACTER;

void main()
{	
	int  nTurn = 1;
	CHARACTER charHero = { TRUE, 40, 0, 30}, charEnemy = { TRUE, 30, 0, 20};

	while (charEnemy.bIsLive && charHero.bIsLive)
	{
		printf("Turn : %d\n", nTurn);	

		printf("���� ĳ���� ���� %3d, �ջ� %3d\n", charHero.nLife,  charHero.nDamage);
		printf("  �� ĳ���� ���� %3d, �ջ� %3d\n", charEnemy.nLife, charEnemy.nDamage);

		if (charHero.bIsLive)
		{
			//// ����ĳ������ ���� ( ��ĳ������ �ջ� ���� )
			charEnemy.nDamage = ((rand() % charHero.nStr)+4) / 2;
			charEnemy.nLife -= charEnemy.nDamage;
			if (charEnemy.nLife < 0) charEnemy.bIsLive = FALSE;		
		}

		if (charEnemy.bIsLive)
		{
			//// ��ĳ������ ���� ( ����ĳ������ �ջ� ���� )
			charHero.nDamage = ((rand() % charEnemy.nStr)+4) / 2;
			charHero.nLife -= charHero.nDamage;
			if (charHero.nLife < 0) charHero.bIsLive = FALSE;
		}		

		////
		nTurn++;

		//// �Է´��
		printf("Enter <<");
		getchar();
	}

	printf("Turn : %d\n", nTurn);	
	printf("���� ĳ���� ���� %3d, �ջ� %3d\n", charHero.nLife,  charHero.nDamage);
	printf("  �� ĳ���� ���� %3d, �ջ� %3d\n", charEnemy.nLife, charEnemy.nDamage);
}



