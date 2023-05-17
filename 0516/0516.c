#include <stdio.h>
void Practice1();
void Practice2();
void Practice3();
void Practice4();
void Practice5();

int main()
{
	Practice5();

	return 0;
}

void Practice1()
{
	printf("문제1\n");
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	int ptrLen = sizeof(arr) / sizeof(int);
	printf("ptrLen : %d\n", ptrLen);
	for (int i = 0; i < ptrLen; i++)
	{
		//*(ptr) += 2;
		//printf("%d\n", *ptr);
		//ptr++;
		++ptr;
	}

}
void Practice2()
{
	printf("문제2\n");
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	int ptrLen = sizeof(arr) / sizeof(int);
	printf("ptrLen : %d\n", ptrLen);
	for (int i = 0; i < ptrLen; i++)
	{
		*(ptr + i) += 2;
		printf("%d\n", *(ptr+i));
	}

}
void Practice3()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int arrLen = sizeof(arr) / sizeof(int);
	int* ptr = &arr[arrLen - 1];
	int sum = 0;

	for (int i = 0; i < arrLen; i++)
	{
		sum += *ptr;
		ptr--;
	}

	printf("합계 : %d", sum);
}
void Practice4()
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int arrLen = sizeof(arr) / sizeof(int);
	int* ptrStart = arr;
	int* ptrEnd = &arr[arrLen-1];

	for (int i = 0; i < arrLen / 2; i++)
	{
		int temp = *(ptrStart + i);
		*(ptrStart + i) = *(ptrEnd - i);
		*(ptrEnd - i) = temp;
	}

	for (int i = 0; i < arrLen; i++)
	{
		//printf("%d ", *(ptrStart+i));
		printf("%d ", arr[i]);
	}
}
void Practice5()
{
	int num1 = 10, num2 = 20, num3 = 30, num4 = 40, num5 = 50;
	int* arr[5] = {&num1, &num2, &num3, &num4, &num5};



	**(arr + 0);	// 10;
	printf("%d\n", **(arr));
	printf("%p\n", **arr);

	printf("%d\n", *arr[0]);
	printf("%p\n", *arr);

	printf("%d\n", arr);
	printf("%p\n", arr);

}