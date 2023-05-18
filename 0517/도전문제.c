#include <stdio.h>

// ���� 1
void Practice1();
void Odd(int* odd, int oddLen);
void Even(int* even, int evenLen);

// ���� 2
void Practice2();
void Decimal(int);

// ���� 3
void Practice3();
void FirstOddLastEven(int*, int);

// ���� 4
void Practice4();
int Palindrome(char* words);

// ���� 5
void Practice5();
void DesSort(int*, int);


int main()
{
	Practice4();
	return 0;
}

// ����1
void Practice1()
{
	int arr[10] = { 0 };
	int arrLen = sizeof(arr) / sizeof(int);
	int odd[10] = { 0 };
	int even[10] = { 0 };
	int evenCount = 0;
	int oddCount = 0;
	for (int i = 0; i < arrLen; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] % 2 == 0)
			even[evenCount++] = arr[i];
		else
			odd[oddCount++] = arr[i];
	}
	Odd(odd, oddCount);
	printf("\n");
	Even(even, evenCount);

}
void Odd(int* odd, int oddLen)
{
	printf("Ȧ�� ��� : ");
	for (int i = 0; i < oddLen; i++)
	{
		printf("%d ", odd[i]);
	}
}
void Even(int* even, int evenLen)
{
	printf("¦�� ��� : ");
	for (int i = 0; i < evenLen; i++)
	{
		printf("%d ", even[i]);
	}
}

// ����2
void Practice2()
{
	int num = 0;
	printf("���� �ϳ� �Է� : ");
	scanf_s("%d", &num);
	Decimal(num);
}
void Decimal(int input)
{
	int decimalLen = 0;
	int divNum = 2;
	int decimal[32] = { 0 };
	int nextDiv = 0;

	while(nextDiv != 1)
	{
		decimal[decimalLen++] = input % divNum;
		nextDiv = input / divNum;
		input = nextDiv;
	}
	decimal[decimalLen] = nextDiv;

	for(int i= decimalLen; i >= 0; i--)
		printf("%d", decimal[i]);
}

// ����3
void Practice3()
{
	int arr[10] = { 0 };
	int arrLen = sizeof(arr) / sizeof(int);
	printf("���� 10�� �Է� : \n");
	for (int i = 0; i < arrLen; i++)
		scanf("%d", &arr[i]);

	FirstOddLastEven(arr, arrLen);
}
void FirstOddLastEven(int* input, int inputLen)
{
	int arrSort[10] = { 0 };
	int evenCount = 0;
	for (int i = 0; i < inputLen; i++)
	{
		if (input[i] % 2 == 0)
		{
			arrSort[inputLen - 1 - evenCount++] = input[i];
			continue;
		}
		arrSort[i - evenCount] = input[i];
	}
	for (int i = 0; i < inputLen; i++)
	{
		printf("%d ", arrSort[i]);
	}
}

// ����4
void Practice4()
{
	char words[5] = "noon";
	int result = Palindrome("no1on1");
	if (result == 1)
		printf("ȸ���� �½��ϴ�!\n");
	else
		printf("ȸ���� �ƴմϴ�!\n");
}
int Palindrome(char* words)
{
	int wordsLen = 0;
	while (words[wordsLen] != '\0')
	{
		wordsLen++;
	}
	for (int i = 0; i < (wordsLen-1)/2; i++)
	{
		if (words[i] != words[(wordsLen-1) - i])
		{
			return 0;
		}
		if (words[i] == words[wordsLen - i])
			continue;
	}

	return 1;
}

// ����5
void Practice5()
{
	int arr[7] = { 0 };
	int arrLen = sizeof(arr) / sizeof(int);
	printf("%d���� ���� �Է� : ", arrLen);
	for (int i = 0; i < arrLen; i++)
		scanf("%d", &arr[i]);
	DesSort(arr, arrLen);
	for (int i = 0; i < arrLen; i++)
		printf("%d ", arr[i]);
}
void DesSort(int* input, int inputLen)
{
	for (int i = 0; i < inputLen-1; i++)
	{
		for (int j = 0; j < (inputLen - i) - 1; j++)
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
