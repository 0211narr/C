#include <stdio.h>
#pragma warning (disable:4996)

void main()
{
	int mMenu;
	int i = 0;  //i 2단,3단,..
	int plus = 0;
	int dap = 0; //곱한 값

	while (1)
	{
		printf("메뉴\n"
			"1.구구단 모두 출력\n"
			"2.원하는 구구단 출력\n"
			"3.출력 후 다시 메뉴 출력\n\n");

		printf("메뉴 입력 : ");
		scanf("%d", &mMenu);
		printf("\n");


		switch (mMenu)
		{
		case 1:  //구구단 모두 출력
		{
			for (i = 2; i < 5; i++)
			{
				for (plus = 1; plus < 10; plus++)
				{
					dap = i * plus;
					printf("%dx%d=%-3d %dx%d=%-3d %dx%d=%-3d\n", i, plus, dap, i + 1, plus, dap, i + 2, plus, dap);

				}
				printf("\n");
				break;
			}
			for (i = 5; i < 8; i++)
			{
				for (plus = 1; plus < 10; plus++)
				{
					dap = i * plus;
					printf("%dx%d=%-3d %dx%d=%-3d %dx%d=%-3d\n", i, plus, dap, i + 1, plus, dap, i + 2, plus, dap);

				}
				printf("\n");
				break;
			}
			for (i = 8; i < 10; i++)
			{
				for (plus = 1; plus < 10; plus++)
				{
					dap = i * plus;
					printf("%dx%d=%-3d %dx%d=%-3d\n", i, plus, dap, i + 1, plus, dap);

				}
				printf("\n");
				break;
			}
		}
		break;

		case 2:  //원하는 구구단 출력
		{
			printf("원하는 구구단:");
			scanf("%d", &i);
			printf("\n");
			for (plus = 1; plus < 10; plus++)
			{
				dap = i * plus;
				printf("%dx%d=%-3d\n", i, plus, dap);
			}
			printf("\n");
		}
		break;
		case 3:  //출력후 다시 메뉴출력
		break;
		}
	}
}
