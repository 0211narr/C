#include <stdio.h>
#include "strrot.h"

//���ڿ� ȸ��

void main()
{
	char pStr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	char rot;

	printf("%s\n", pStr);

	for (i = 0; i < pStr[i] != '\0'; i++)
	{
		rot = __strrot(pStr);
		printf("%s\n", pStr);
	}
}
