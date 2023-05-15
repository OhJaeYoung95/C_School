#include<stdio.h>
void Practice1();
void Practice2();
void Practice3();
void Practice4();
void Practice5();
void Practice6();
void Practice7();
int Practice8(int);


int main()
{
	Practice7();
	//printf("%d",Practice8(8));
}


void Practice1()
{
	int input = 0;
	//scanf("%d", &input);
	printf("%x", input);

}
void Practice2()
{
	int input1 = 0;
	int input2 = 0;
	scanf("%d %d", &input1, &input2);

	if (input1 > input2)
	{
		int temp = input1;
		input1 = input2;
		input2 = temp;
	}
	for (int dan = input1; dan <= input2; ++dan)
	{
		printf("%d 단 출력\n", dan);
		for (int line = 1; line <= 9; ++line)
		{
			printf("%d x %d = %d\n", dan, line, dan * line);
		}
	}

}

void Practice3()
{
	int input1 = 0;
	int result1 = 0;
	int input2 = 0;
	int result2 = 0;

	scanf("%d %d", &input1, &input2);

	if (input1 > input2)
	{
		int temp = input1;
		input1 = input2;
		input2 = temp;
	}

	for (int i = 1; i <= input1; i++)
	{
		if(input1 % i == 0 && input1 != i)
			result1 = i;
	}
	for (int i = 1; i <= input2; i++)
	{
		if (input2 % i == 0 && input2 != i)
		{
			result2 = i;
			if (result1 == i)
				break;
		}
	}

	printf("최대 공약수 : %d", result1);


}

void Practice4()
{
	int creamBreadPrice = 500;
	int shrimpSnackPrice = 700;
	int colaPrice = 400;
	int amount = 3500;

	for (int one = 1; one < amount / creamBreadPrice; ++one)
	{
		for (int two =  1; two < amount / shrimpSnackPrice; ++two)
		{
			for (int three = 1; three < amount / colaPrice; ++three)
			{
				if (one * creamBreadPrice + two * shrimpSnackPrice + three * colaPrice == amount)
				{
					printf(" 크림빵 : %d개 새우깡 : %d개 콜라 %d개\n", one, two, three);
				}
			}
		}
	}

}
void Practice5()
{
	int primeNum = 2;
	int divNum = 0;
	int count = 0;

		while (count != 10)
		{
			divNum = 0;
			for (int i = 1; i <= primeNum; i++)
			{
				if (primeNum % i == 0)
				{
					divNum++;
				}
			}
			if (divNum == 2)
			{
				printf("%d ", primeNum);
				count++;
				primeNum++;
			}
			else
			{
				primeNum++;
			}

		}

}

void Practice6()
{
	int hour = 0;
	int min = 0;
	int second = 0;
	scanf("%d", &second);

	min = second / 60;
	hour = min / 60;
	second %= 60;
	min %= 60;
	printf("%d 시 %d 분 %d 초", hour, min, second);
}

void Practice7()
{
	int input = 0;
	int answer = 1;
	int count = 0;
	scanf("%d", &input);
	while (input > answer)
	{
		count++;
		answer *= 2;
	}
	printf("2의 %d승 : %d\n", count, answer);
	printf("2의 승수 : %d\n", count);

}
int Practice8(int input)
{
	int num = 0;
	if (input == 0)
		return 1;	
	return 2 * Practice8(input - 1);
}

