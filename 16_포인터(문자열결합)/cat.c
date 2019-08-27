#include "cat.h"

char * __strcat(char * pDst, const char * pSrc)
{
	while (*pDst)
		pDst++;

	while (*pSrc)
	{
		*pDst++ = *pSrc++;
	}
	*pDst = '\0';
}