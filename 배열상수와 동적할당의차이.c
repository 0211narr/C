#include <stdio.h>

void __function( int i );
{
	int arr[i];
	//int* arr = (int*)malloc( sizeof(int)*i );

	int j = 0;
	if(arr == NULL )
	{
		puts("�޸� �Ҵ翡 ����!");
		return;
	}

	// ���� �Ҵ��� �޸� ���
	for( j = 0; j < i; j++ )
		arr[j] = j + 1;
	for( j = 0; j < i; j++ )
		printf( "%d", arr[j] );
	printf("\n");

	free(arr); // �Ҵ�� �޸� �Ҹ�.
}

int main(void)
{
	int m = 0;
	fputs("�迭�� ũ�⸦ �Է��ϼ��� : ", stdout);
	scanf("%d", &m);
	__function(m);

	return 0;
}