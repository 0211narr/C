#include <stdio.h>
#include "cat.h"

//���ڿ� ����

void main()
{
	char pDst[] = "�Ļ���";
	const char pSrc[] = "�󸶿�����";

	__strcat(pDst, pSrc);
	printf("%s\n", pDst);
}
