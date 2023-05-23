#include<stdio.h>

// 문제1
void Practice1()
{
	int* arr1[5];
	int* arr2[3][5];

	int** ptr1 = arr1;
	int* (*ptr2)[5] = arr2;

	printf("%p\n", arr1);
	printf("%p\n", ptr1);
	printf("%p\n", arr2);
	printf("%p\n", ptr2);
}

// 문제2
void SimpleFuncOne(int* ptr1, int* ptr2){}
void SimpleFuncTwo(int (*ptr1)[4], int(*ptr2)[4]){}
void Practice2()
{
	int arr1[3];
	int arr2[4];
	int arr3[3][4];
	int arr4[2][4];

	SimpleFuncOne(arr1, arr2);
	SimpleFuncTwo(arr3, arr4);
}

// 문제3
void ComplexFuncOne(int** ptr1, int*(*ptr2)[5]){}
void ComplexFuncTwo(int*** ptr3, int***(*ptr4)[5]){}
void Practice3()
{
	int* arr1[3];
	int* arr2[3][5];
	int** arr3[5];
	int*** arr4[3][5];


	ComplexFuncOne(arr1, arr2);
	ComplexFuncTwo(arr3, arr4);
}

// 문제4
void Practice4()
{
	int arr[3][2] = { {1,2}, {3,4}, {5,6} };
	printf("%d %d \n", arr[1][0], arr[0][1]);			// 3 2
	printf("%d %d \n", *(arr[2]+1), *(arr[1] +1));		// 6 4
	printf("%d %d \n", (*(arr+2))[0], (*(arr+0))[1]);	// 5 2
	printf("%d %d \n", **arr, *(*(arr+0)+0));			// 1 1

}

// 문제5
void Practice5()
{

	int arr[2][2][2] = 
		{ 1,2
		,3,4
		,5,6
		,7,8 };

	printf("정답 : %d\n", arr[1][0][1]);
	printf("%d\n", (*(arr + 1))[0][1]);
	printf("%d\n", *(*(arr + 1) + 0)[1]);
	printf("%d\n", *(*(*(arr + 1) + 0) + 1));
	printf("%d\n", (*(arr[1] + 0))[1]);
	printf("%d\n", *(*(arr + 1)[0] + 1));
	/*
		arr[1][0][1] 대신할 수 있는 문장 5개

		(*(arr+1))[0][1]
		(*(*(arr+1)+0))[1]
		*(*(*(arr+1)+0)+1)
		(*(arr[1]+0)[1])
		*(*(arr+1)[0]+1))
	*/
}

int main()
{
	Practice5();
	return 0;
}