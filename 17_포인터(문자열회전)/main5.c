#include <stdio.h>
#include "strrot.h"

//문자열 회전

void main()
{
	char pStr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	char rot;

	printf("%s\n", pStr);

	for (i = 0; i < pStr[i] != '\0'; i++)
	{
		rot = __strrot(pStr);
		printf("%s\n", pStr);
	}
}
