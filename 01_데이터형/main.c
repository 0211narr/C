#include <stdio.h> 

// ���� �Լ� : ���α׷��� ���� ������ ( Entry Point )
//             �׻� �߰�ȣ�� ���۰� ������ ǥ�õȴ�.

void main(void)
{
	int   nData;
	float fData;		

	int rval ;	

	//// ���ڿ� ���, rval�� ��µ� ���� ( Ȯ�忭 ���� )
	rval = printf("1234\n5678\n");

	//// Ȯ�忭
	//// ���� ���� ���� �ʴ� ��� �������� EAX�� �����ϸ� ���ϰ��� �˼� �ִ�
	printf("\a \\ \" \t 1\n");

	////
	printf("������ �Ǽ� �ΰ��� ���� �Է�:");
	//// ���� ���� �Է� ���� ����
	scanf("%d %f", &nData, &fData);

	////
	printf("�Է� ���� �� ����=%d �Ǽ�=%f ����=%e ����Ʈ=%g\n", nData, fData, fData, fData);
	printf("�Է� ���� �� 16���� %x %X\n", nData, nData);

	////
	printf("������ �Է� ( 16���� : �� 0xA ):");

}