#ifndef knj.h
#include "knj.h"

void measureTime(void)   // ����ð� ���� �ڵ�
{
    clock_t start, finish; //���۽ð�, ������ �ð�

    double duration; // ����ð� ���� ����
   	int num; // ��������
	int ch;
	int i; // �ݺ��� ����
	int n;

			printf("=========Performance test menu========= \n"); // ����ð� ������ �� �������� �޴�
			printf("1. Factorial \n");
			printf("2. Fibo \n");
			printf("3. Hanoi Tower \n");
			printf("4. EXIT \n");
			printf("����: ");
			scanf("%d", &n);
			start = clock(); // ���۽ð�

			switch(n)
			{
			case 1:
				printf("\n");
				printf("Factorial ���� �Է�: ");
				scanf("%d", &num);
				printf("%d! = %d \n", num, Factorial(num)); // ���丮�� �Լ� ȣ��
				break;

			case 2:
				printf("\n");
			 	printf("Fibo ���� �Է�: ");
				scanf("%d", &num);
				for(i=1; i<num+1; i++)
				{
					ch = Fibo(i);
					printf("%d   ", ch);
				} // �ݺ����� ����ؼ� �Ǻ���ġ ������ ���
				printf("\n");
				break;
	
			case 3:
				printf("\n");
				printf("Honoi Tower ���� �Է�: ");
				scanf("%d", &num);
				Hanoi_Tower(num, 'A', 'B', 'C'); // 3���� ���̾Ƹ�� ����� A, B, C�� �Ű����� ����
				break;
			case 4:
				printf("\n\n");
				while(1) menu(); // ����ð� �������� ���������� ������ �޴��� ���ư��� ���� �ݺ���
			}
				finish = clock();   // ����ð�
				duration = (double)(finish - start) / CLOCKS_PER_SEC;
				printf("%f ���Դϴ�.\n", duration);
				printf("\n\n\n");
}
#endif

