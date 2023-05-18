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

//연습문제3
//ShowAllData함수는 배열에 있는 값을 보여주는 함수이다.
//이 함수의 의도는 보여주기만 해야한다.
//const int* arr은 arr변수에 값을 변경하지 못하도록 방지하는 것입니다.
//실수로 이 함수에서 변수가 가지고 있는 값을 변경을 할 경우를 방지하기 위해서 const를 붙인것이다.

//연습문제4
//main함수에서 int형포인터 ptr은 num의 주소를 참조합니다.
//그리고 ShowData함수에 매개변수 인자로 ptr을 넘깁니다.
//이 ptr은 num의 주소를 참조하는데 int형 포인터인 rptr이 ptr을 참조하게 됩니다
//이렇게 되면 참조 방식이 rptr = > ptr = > num, 즉 rptr = > num 이렇게도 성립이 됩니다.
//그런데 ptr을 매개변수로 받을때 const int포인터형으로 받게됩니다.
//이렇게 되면 해당 포인터가 참조하는 값을 바꿀수 없습니다.
//이와 연결된 rptr의 값을 ShowData함수에서 바꾸는데 이에서 오류가 발생합니다.
// 
// const로 선언한 것이 변경하지 않으려는 의도인데 이것을 다른 포인터에 또 할당하는것 또한 문제다.

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