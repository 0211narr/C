#include "cpy.h"

void __strcpy(char * pDst, const char * pSrc)
{
	for (pSrc; *pSrc != '\0'; pSrc++)
	{
		*pDst = *pSrc;
		pDst++;
	}
	*pDst = '\0';
}

//a\0CDE