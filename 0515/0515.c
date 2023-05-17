#include <stdio.h>
void PrePractice();
void Practice1();
void Practice2();
void Practice3();
void Practice4();
void Practice5();
int main()
{
	Practice4();

	return 0;
}

void PrePractice()
{
	int arr[5];
	int sum = 0;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	int arrLength = sizeof(arr) / sizeof(int);

	for (int i = 0; i < arrLength; i++)
	{
		sum += arr[i];
	}

	printf("배열요소에 저장된 값의 합 : %d \n", sum);
}
void Practice1()
{
	int input[5] = { 0 };
	int inputLength = sizeof(input) / sizeof(int);
	int max = 0;
	int min = 0;
	int sum = 0;

	for (int i = 0; i < inputLength; i++)
	{
		printf("%d번째 입력 : ", i + 1);
		scanf("%d", &input[i]);
		sum += input[i];
		max = max < input[i] ? input[i] : max;
	}
	min = input[0];
	for (int i = 0; i < inputLength; i++)
	{
		min = min > input[i] ? input[i] : min;
	}

	printf("최대값 : %d 최소값 : %d 합계 : %d", max, min, sum);
}
void Practice2()
{
	char str[10] = "Good time";
	//char str1[] = { 'G', 'o', 'o','d',' ','t','i','m','e' };
	//int strLen = sizeof(str) / sizeof(char);
	//int strLen1 = sizeof(str1) / sizeof(char);
	printf("%s", str);
	//printf("str : %d str1 : %d", strLen, strLen1);
}
void Practice3()
{
	char words[50] = { " " };
	int wordsLength = sizeof(words) / sizeof(char);
	int index = 0;
	scanf("%s", words);
	while(words[index] != '\0')
	{
		printf("%c", words[index]);
		index++;
	}
	printf("는 %d글자이다", index);
}
void Practice4()
{
	char str[50] = { " "};
	int strLength = sizeof(str) / sizeof(char);
	int index = 0;
	scanf("%s", str, sizeof(str));
	
	while (str[index] != '\0')
	{
		index++;
	}

	for (int i = 0; i < index/2; ++i)
	{
		char temp = str[i];
		str[i] = str[index - i-1];
		str[index - i-1] = temp;

	}

	printf("%s", str);
}
void Practice5()
{
	char str[50] = { " " };
	int strLength = sizeof(str) / sizeof(char);
	int maxAsc = 0;
	scanf("%s", str);

	for (int i = 0; i < strLength; i++)
	{
		maxAsc = maxAsc < str[i] ? str[i] : maxAsc;
	}
	printf("%c", maxAsc);
}