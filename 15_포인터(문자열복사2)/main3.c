#include <stdio.h>
#include "cpyex.h"

//���ڿ� ����2

void main()
{
	char pDst[] = "ABCD�԰�ʹ�";
	const char pSrc[] = "ȣ��";

	__strcpyEx(pDst, pSrc);
	printf("%s\n", pDst);
}