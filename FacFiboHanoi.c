#ifndef knj.h
#include "knj.h"

int Factorial(int n) // ���丮�� �Լ�
{
	if(n==0) return 1;
	else return n*Factorial(n-1); // n * (n-1)!
}

int Fibo(int n) // �Ǻ���ġ ���� �Լ�
{
	if(n==1) return (0);
	else if(n==2) return (1);
	else return Fibo(n-1)+Fibo(n-2); // (n-1)�� (n-2)�� ���Ѵ�. ���ڰ� Ŀ������ ���� �Լ��� �Ȱ��� �Ҹ���.
}

void Hanoi_Tower(int n, char from, char tmp, char to) // �ϳ���Ÿ�� �Լ�
{
	if(n==1) printf("���� 1�� %c���� %c���� �ű��. \n", from, to); // ������ 1���� ���� 1���� �ű�� ������.

	else
	{
		Hanoi_Tower(n-1, from, to, tmp); // 3�ܰ� �� 1�ܰ�: (n-1)���� A���� B��
		printf("���� %d�� %c���� %c���� �ű��. \n",n, from, to); // 3�ܰ� �� 2�ܰ�
		Hanoi_Tower(n-1, tmp, from, to); // 3�ܰ� �� 2�ܰ� 3�ܰ�
	}
}
#endif