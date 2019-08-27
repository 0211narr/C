#include "strrot.h"

char *__strrot(char * pStr)
{
	int i;

	char rot = pStr[0];

	for (i = 0; pStr[i + 1] != '\0'; ++i)
	{
		pStr[i] = pStr[i + 1];
	}
	pStr[i] = rot;
	return pStr;
}