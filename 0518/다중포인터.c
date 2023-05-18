#include <stdio.h>
void MaxAndMin(int**, int**, int*);

int main()
{
	int* maxPtr = 0;
	int* minPtr = 0;
	int arr[5] = { 10, 20, 30, 40, 50 };

	MaxAndMin(&maxPtr, &minPtr, arr);

	printf("%d\n", arr[4]);
	printf("%d\n", arr[0]);
	printf("弥措蔼 林家 : %d \n", *maxPtr);
	printf("弥家蔼 林家 : %d \n", *minPtr);
}

void MaxAndMin(int** maxPtr,int** minPtr, int* arr)
{
	*minPtr = &arr[0];
	*maxPtr = &arr[0];
	for (int i = 0; i < 5; i++)
	{
		*maxPtr = **maxPtr < arr[i] ? &arr[i] : *maxPtr;
		*minPtr = **minPtr < arr[i] ? *minPtr  : &arr[i];
	}
}