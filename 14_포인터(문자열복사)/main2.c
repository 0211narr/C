#include <stdio.h>
#include "cpy.h"

//���ڿ� ����

void main()
{
	char pDst[] = "ABCDE";
	const char pSrc[] = "a";

	__strcpy(pDst,pSrc);
	printf("%s\n", pDst);
}