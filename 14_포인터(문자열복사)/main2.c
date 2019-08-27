#include <stdio.h>
#include "cpy.h"

//문자열 복사

void main()
{
	char pDst[] = "ABCDE";
	const char pSrc[] = "a";

	__strcpy(pDst,pSrc);
	printf("%s\n", pDst);
}