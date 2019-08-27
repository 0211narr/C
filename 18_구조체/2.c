#include <stdio.h>
#include <stdlib.h>

#define TRUE	1
#define FALSE	0

typedef int	BOOL;

typedef struct 
{
	BOOL	bIsLive;  // 생존 여부
	int		nStr;     // 힘
	int		nDamage;  // 공격 받은 정도
	int		nLife;    // 생명
} CHARACTER;

void main()
{	
	int  nTurn = 1;
	CHARACTER charHero = { TRUE, 40, 0, 30}, charEnemy = { TRUE, 30, 0, 20};

	while (charEnemy.bIsLive && charHero.bIsLive)
	{
		printf("Turn : %d\n", nTurn);	

		printf("영웅 캐릭터 생명 %3d, 손상 %3d\n", charHero.nLife,  charHero.nDamage);
		printf("  적 캐릭터 생명 %3d, 손상 %3d\n", charEnemy.nLife, charEnemy.nDamage);

		if (charHero.bIsLive)
		{
			//// 영웅캐릭터의 공격 ( 적캐릭터의 손상 정도 )
			charEnemy.nDamage = ((rand() % charHero.nStr)+4) / 2;
			charEnemy.nLife -= charEnemy.nDamage;
			if (charEnemy.nLife < 0) charEnemy.bIsLive = FALSE;		
		}

		if (charEnemy.bIsLive)
		{
			//// 적캐릭터의 공격 ( 영웅캐릭터의 손상 정도 )
			charHero.nDamage = ((rand() % charEnemy.nStr)+4) / 2;
			charHero.nLife -= charHero.nDamage;
			if (charHero.nLife < 0) charHero.bIsLive = FALSE;
		}		

		////
		nTurn++;

		//// 입력대기
		printf("Enter <<");
		getchar();
	}

	printf("Turn : %d\n", nTurn);	
	printf("영웅 캐릭터 생명 %3d, 손상 %3d\n", charHero.nLife,  charHero.nDamage);
	printf("  적 캐릭터 생명 %3d, 손상 %3d\n", charEnemy.nLife, charEnemy.nDamage);
}



