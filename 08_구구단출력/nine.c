#include <stdio.h>
#pragma warning (disable:4996)

void main()
{
	int mMenu;
	int i = 0;  //i 2��,3��,..
	int plus = 0;
	int dap = 0; //���� ��

	while (1)
	{
		printf("�޴�\n"
			"1.������ ��� ���\n"
			"2.���ϴ� ������ ���\n"
			"3.��� �� �ٽ� �޴� ���\n\n");

		printf("�޴� �Է� : ");
		scanf("%d", &mMenu);
		printf("\n");


		switch (mMenu)
		{
		case 1:  //������ ��� ���
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

		case 2:  //���ϴ� ������ ���
		{
			printf("���ϴ� ������:");
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
		case 3:  //����� �ٽ� �޴����
		break;
		}
	}
}
