#include <stdio.h>

//���ڿ� ����

int __strlen(char *pStr);

void main()
{
	char a[] = "GLORY";
	int nCount = 0;

	nCount = __strlen(a);
	printf("���ڿ� ����:%d\n", nCount);
}

int __strlen(char *pStr)
{
	int e;
	int nCount = 0;

	printf("%s\n", pStr);

	for (e = 0; pStr[e] != '\0'; e++)
	{
		nCount++;
	}
	return nCount;
}
