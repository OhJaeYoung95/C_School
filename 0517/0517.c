#include <stdio.h>
void Practice1();
int SquareByValue(int);
void SquareByReference(int*);
void Practice2();
void Swap3(int*, int*, int*);
void Test();
void TestFunc(const int*);


int main()
{
	Practice1();
	return 0;
}

// 연습문제1
void Practice1()
{
	int num = 3;
	printf("SquareByValue : %d\n", SquareByValue(num));
	SquareByReference(&num);
	printf("SquareByReference : %d\n", num);
}
int SquareByValue(int num)
{
	return num * num;
}
void SquareByReference(int* num)
{
	*num = *num * *num;
}

// 연습문제2
void Practice2()
{
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	Swap3(&num1, &num2, &num3);
	printf("num1 : %d num2 : %d num3 : %d", num1, num2, num3);

}
void Swap3(int* num1, int* num2, int* num3)
{
	int temp = *num2;
	*num2 = *num1;
	*num1 = *num3;
	*num3 = temp;

}



void Test()
{
	int num = 10;
	int* ptr = &num;
	TestFunc(ptr);
}
void TestFunc(const int* constPtr)
{
	//*constPtr = 20;
	printf("%d", *constPtr);
}