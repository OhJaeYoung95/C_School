#include <stdio.h>
int Max(int, int, int);
int Min(int, int, int);
void Practice1();
void Practice2();
void Practice3();
double CelToFah(double);
double FahToCel(double);
void Fibonacci(int);


int main()
{
	//Practice1();
	//Practice2();
	//Practice3();
}

void Practice1()
{
	printf("문제1\n");
	printf("가장 큰 수 :%d\n", Max(1, 2, 3));
	printf("가장 큰 수 :%d\n", Min(1, 2, 3));
	printf("\n");
}

int Max(int input1, int input2, int input3)
{
	return 	input1 > input2 ? (input1 > input3 ? input1 : input3) : (input2 > input3 ? input2 : input3);
}

int Min(int input1, int input2, int input3)
{
	return 	input1 < input2 ? (input1 < input3 ? input1 : input3) : (input2 < input3 ? input2 : input3);
}

void Practice2()
{
	printf("문제2\n");
	printf("화씨 : %lf\n", CelToFah(36));
	printf("섭씨 :%lf\n", FahToCel(96.8));
	printf("\n");
}

double CelToFah(double cel)
{
	return 1.8 * cel + 32;
}
double FahToCel(double fah)
{
	return (fah - 32) / 1.8;
}

void Practice3()
{
	printf("문제3\n");
	printf("피보나치 수열\n");
	Fibonacci(10);
	printf("\n");

}

void Fibonacci(int input)
{
	int first = 0;
	int second = 1;

	printf("%d ", first);
	printf("%d ", second);
	for (int i = 0; i < input-2; i++)
	{
		int third = first + second;
		first = second;
		second = third;
		printf("%d ", third);
	}
}
