#include <stdio.h>
#include "cpyex.h"

//문자열 복사2

void main()
{
	char pDst[] = "ABCD먹고싶다";
	const char pSrc[] = "호빵";

	__strcpyEx(pDst, pSrc);
	printf("%s\n", pDst);
}