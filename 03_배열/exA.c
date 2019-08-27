#include <stdio.h>

void main(void)
{
	//////////////과제1///////////
	char cH[4] = { 'N','A','R','R' };
	//char cH[] = { 'N', 'A', 'R', 'R' };
	//char cH[4] = { 'N','A' };
	float one[4] = { 1.1f,2.2f,3.3f,4.4f };
	//float one[] = { 1.1,2.2,3.3,4.4 };
	//float one[4] = { 1.1,2.2 };
	printf("%c %c %c %c\n", cH[0], cH[1], cH[2], cH[3]);
	printf("%c %c %d %d", cH[0], cH[1], cH[2], cH[3]);
	printf("\n\n");
	printf("%f %f %f %f\n", one[0], one[1], one[2], one[3]);
	printf("\n\n\n\n\n");
	/////////////////////////////////////////////////


	//////////////과제2///////////
	int iN[4] = { 'a', 'b', 'c', 'd' };
	float fL[4] = { 'b','a','b','y' };
	///////////////////////////////////////////////


	//////////////과제3///////////
	char narr[] = "NARR";
	printf("%c%c%c%c",narr[0],narr[1],narr[2],narr[3]);
}