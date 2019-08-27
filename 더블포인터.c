#include <stdio.h>

void asd( int* iValue );
void asdf( int** iValue );

void main()
{
	int i = 5;

	asd( &i );

	printf( "%d ", i);
}

void asd ( int* iValue )
{
	int* iResult = iValue;

	asdf( &iResult );
}

void asdf ( int** iValue )
{
	**iValue = 7;
}
