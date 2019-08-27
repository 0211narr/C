#include <stdio.h>
#include "cat.h"

//문자열 결합

void main()
{
	char pDst[] = "식빵이";
	const char pSrc[] = "얼마였더라";

	__strcat(pDst, pSrc);
	printf("%s\n", pDst);
}
