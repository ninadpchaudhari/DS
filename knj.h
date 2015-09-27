#define MAX_ELEMENTS 100 // 컴파일전 선행처리기에 의해 MAX_ELEMENTS=100이 된다.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Factorial(int n); // 팩토리얼 함수
int Fibo(int n); // 피보나치 수열 함수
void Hanoi_Tower(int n, char from, char tmp, char to); // 하노이타워 함수
void measureTime(void); // 수행시간 측정 함수