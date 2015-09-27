#ifndef knj.h
#include "knj.h"

void measureTime(void)   // 수행시간 측정 코드
{
    clock_t start, finish; //시작시간, 끝나는 시간

    double duration; // 수행시간 측정 변수
   	int num; // 변수선언
	int ch;
	int i; // 반복문 변수
	int n;

			printf("=========Performance test menu========= \n"); // 수행시간 측정할 때 보여지는 메뉴
			printf("1. Factorial \n");
			printf("2. Fibo \n");
			printf("3. Hanoi Tower \n");
			printf("4. EXIT \n");
			printf("선택: ");
			scanf("%d", &n);
			start = clock(); // 시작시간

			switch(n)
			{
			case 1:
				printf("\n");
				printf("Factorial 숫자 입력: ");
				scanf("%d", &num);
				printf("%d! = %d \n", num, Factorial(num)); // 팩토리얼 함수 호출
				break;

			case 2:
				printf("\n");
			 	printf("Fibo 숫자 입력: ");
				scanf("%d", &num);
				for(i=1; i<num+1; i++)
				{
					ch = Fibo(i);
					printf("%d   ", ch);
				} // 반복문을 사용해서 피보나치 수열을 출력
				printf("\n");
				break;
	
			case 3:
				printf("\n");
				printf("Honoi Tower 숫자 입력: ");
				scanf("%d", &num);
				Hanoi_Tower(num, 'A', 'B', 'C'); // 3개의 다이아몬드 기둥을 A, B, C로 매개변수 전달
				break;
			case 4:
				printf("\n\n");
				while(1) menu(); // 수행시가 측정에서 빠져나가서 원래의 메뉴로 돌아가기 위한 반복문
			}
				finish = clock();   // 종료시간
				duration = (double)(finish - start) / CLOCKS_PER_SEC;
				printf("%f 초입니다.\n", duration);
				printf("\n\n\n");
}
#endif

