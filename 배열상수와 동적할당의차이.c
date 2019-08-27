#include <stdio.h>

void __function( int i );
{
	int arr[i];
	//int* arr = (int*)malloc( sizeof(int)*i );

	int j = 0;
	if(arr == NULL )
	{
		puts("메모리 할당에 실패!");
		return;
	}

	// 동적 할당한 메모리 사용
	for( j = 0; j < i; j++ )
		arr[j] = j + 1;
	for( j = 0; j < i; j++ )
		printf( "%d", arr[j] );
	printf("\n");

	free(arr); // 할당된 메모리 소멸.
}

int main(void)
{
	int m = 0;
	fputs("배열의 크기를 입력하세요 : ", stdout);
	scanf("%d", &m);
	__function(m);

	return 0;
}