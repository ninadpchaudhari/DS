#define MAX_ELEMENTS 100 // �������� ����ó���⿡ ���� MAX_ELEMENTS=100�� �ȴ�.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Factorial(int n); // ���丮�� �Լ�
int Fibo(int n); // �Ǻ���ġ ���� �Լ�
void Hanoi_Tower(int n, char from, char tmp, char to); // �ϳ���Ÿ�� �Լ�
void measureTime(void); // ����ð� ���� �Լ�