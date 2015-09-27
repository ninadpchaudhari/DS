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
		printf("=========menu========= \n"); // 처음부터 보여질 메뉴
		printf("1. Factorial \n");
		printf("2. Fibo \n");
		printf("3. Hanoi Tower \n");
		printf("4. Performance test \n");
		printf("선택: "); // 사용자가 선택.
		scanf("%d", &n);

	
		switch(n)
		{
		case 1:
			printf("\n");
			printf("Factorial 숫자 입력: ");
			scanf("%d", &num);
			printf("%d! = %d \n", num, Factorial(num)); // 팩토리얼 함수 호출
			printf("\n\n\n");
			break;

		case 2:
			printf("\n");
		 	printf("Fibo 숫자 입력: ");
			scanf("%d", &num);
			for(i=1; i<num+1; i++)
			{
				ch = Fibo(i);
				printf("%d   ", ch);
			} // 반복문으로 피보나치 수열 출력
			printf("\n\n\n");
			break;

		case 3:
			printf("\n");
			printf("Honoi Tower 숫자 입력: ");
			scanf("%d", &num);
			Hanoi_Tower(num, 'A', 'B', 'C'); // 하노이타워 함수 호출
			printf("\n\n\n");
			break;

		case 4:
			printf("\n\n\n");
			while(1)
			{
			measureTime();   // 시간측정 함수 호출. 원래 메뉴 대신 시간측정 메뉴가 나온다.
			}
			break;

		default:
			printf("1~4까지 선택해주세요. \n"); // 사용자가 잘못 입력했을 경우.
			printf("\n\n");
		}
	}

	return ;
}

#endif