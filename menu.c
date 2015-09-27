#ifndef knj.h
#include "knj.h"

void menu(void)
{
	int n=0;
	int num;
	int ch;
	int i;

	while(1)
	{
		printf("=========menu========= \n"); // ó������ ������ �޴�
		printf("1. Factorial \n");
		printf("2. Fibo \n");
		printf("3. Hanoi Tower \n");
		printf("4. Performance test \n");
		printf("����: "); // ����ڰ� ����.
		scanf("%d", &n);

	
		switch(n)
		{
		case 1:
			printf("\n");
			printf("Factorial ���� �Է�: ");
			scanf("%d", &num);
			printf("%d! = %d \n", num, Factorial(num)); // ���丮�� �Լ� ȣ��
			printf("\n\n\n");
			break;

		case 2:
			printf("\n");
		 	printf("Fibo ���� �Է�: ");
			scanf("%d", &num);
			for(i=1; i<num+1; i++)
			{
				ch = Fibo(i);
				printf("%d   ", ch);
			} // �ݺ������� �Ǻ���ġ ���� ���
			printf("\n\n\n");
			break;

		case 3:
			printf("\n");
			printf("Honoi Tower ���� �Է�: ");
			scanf("%d", &num);
			Hanoi_Tower(num, 'A', 'B', 'C'); // �ϳ���Ÿ�� �Լ� ȣ��
			printf("\n\n\n");
			break;

		case 4:
			printf("\n\n\n");
			while(1)
			{
			measureTime();   // �ð����� �Լ� ȣ��. ���� �޴� ��� �ð����� �޴��� ���´�.
			}
			break;

		default:
			printf("1~4���� �������ּ���. \n"); // ����ڰ� �߸� �Է����� ���.
			printf("\n\n");
		}
	}

	return ;
}

#endif