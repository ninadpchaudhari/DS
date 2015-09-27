#ifndef knj.h
#include "knj.h"

int Factorial(int n) // 팩토리얼 함수
{
	if(n==0) return 1;
	else return n*Factorial(n-1); // n * (n-1)!
}

int Fibo(int n) // 피보나치 수열 함수
{
	if(n==1) return (0);
	else if(n==2) return (1);
	else return Fibo(n-1)+Fibo(n-2); // (n-1)과 (n-2)를 더한다. 숫자가 커질수록 같은 함수가 똑같이 불린다.
}

void Hanoi_Tower(int n, char from, char tmp, char to) // 하노이타워 함수
{
	if(n==1) printf("원판 1을 %c에서 %c으로 옮긴다. \n", from, to); // 원판이 1개일 때는 1개만 옮기면 끝난다.

	else
	{
		Hanoi_Tower(n-1, from, to, tmp); // 3단계 중 1단계: (n-1)개를 A에서 B로
		printf("원판 %d을 %c에서 %c으로 옮긴다. \n",n, from, to); // 3단계 중 2단계
		Hanoi_Tower(n-1, tmp, from, to); // 3단계 중 2단계 3단계
	}
}
#endif