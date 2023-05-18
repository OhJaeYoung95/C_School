#include <stdio.h>
// 문제1
void Practice1();
void ReverseArray(int*, int);

// 문제2
void Practice2();
void FindMaxMin(int*, int, int*, int*);

// 문제3
void Practice3();
double FindMedian(int* arr, int size);

// 문제4
void Practice4();
int FindMode(int* , int);

// 문제5
void Practice5();
int calculateDistance(int* arr, int size, int element1, int element2);

int main()
{
	Practice4();

	return 0;
}

// 문제1
void Practice1()
{
	int arr[5] = { 1,2,3,4,5 };
	int arrLen = sizeof(arr) / sizeof(int);
	ReverseArray(arr, arrLen);
	for (int i = 0; i < arrLen; i++)
	{
		printf("%d", arr[i]);
	}
}
void ReverseArray(int* input, int inputLen)
{
	for (int i = 0; i < inputLen-1; i++)
	{
		for (int j = 0; j < (inputLen - i-1); j++)
		{
			if (input[j] < input[j + 1])
			{
				int temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
			}
		}
	}
}

// 문제2
void Practice2()
{
	int arr[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int arrLen = sizeof(arr) / sizeof(int);
	int max = 0;
	int min = arr[0];
	FindMaxMin(arr, arrLen, &max, &min);
	printf("최대값 : %d 최소값 : %d", max, min);
}
void FindMaxMin(int* arr, int size, int* max, int* min)
{
	*max = *min = arr[0];

	for (int i = 1; i < size; i++)
	{
		*max = *max < arr[i] ? arr[i] : *max;
		*min = *min < arr[i] ? *min : arr[i];
	}

}

// 문제3
void Practice3()
{
	int arr[4] = { 1,2,4,8 };
	int arrLen = sizeof(arr) / sizeof(int);
	printf("%lf",FindMedian(arr, arrLen));
	
}
double FindMedian(int* arr, int size)
{
	if (size % 2 == 0)
	{
		double sum = arr[size / 2] + arr[(size / 2) - 1];
		sum = sum / 2;
		return sum;
	}
	else
	{
		return arr[size / 2];
	}
}

// 문제4
void Practice4()
{
	int arr[14] = { 1,2,2,3,3,3,4,4,4,5,5,5,5,5 };
	int arrLen = sizeof(arr) / sizeof(int);
	printf("%d", FindMode(arr, arrLen));
}
int FindMode(int* arr, int size)
{
	int mode = arr[0];
	int maxCount = 0;
	for (int i = 0; i < size; i++)
	{
		int count = 0;
		for (int j = 0; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				++count;
			}
		}
		if (maxCount < count)
		{
			maxCount = count;
			mode = arr[i];
		}
		//maxCount = maxCount > count ? maxCount : count;
	}
	return mode;
}

// 문제5
void Practice5()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 0, 8, 1, 0 };
	int arrLen = sizeof(arr) / sizeof(int);
	printf("%d", calculateDistance(arr, arrLen, 1, 8));
}

int calculateDistance(int* arr, int size, int element1, int element2)
{
	int* dist1 = NULL;
	int* dist2 = NULL;
	int* result = NULL;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) == element1)
			dist1 = arr + i;
		else if (*(arr + i) == element2)
			dist2 = arr + i;
		if (dist1 == element1 || dist2 == element2)
			return -1;
	}
	if (dist2 > dist1)
	{
		int* temp = dist2;
		dist2 = dist1;
		dist1 = temp;
	}
	result = dist1 - dist2;
	return result;
}