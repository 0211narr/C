#include "cpyex.h"

char * __strcpyEx(char * pDst, const char * pSrc)
{
	for (pSrc; *pSrc != '\0'; pSrc++)
	{
		*pDst = *pSrc;
		pDst++;
	}
	return pDst;
}
