#include<stdio.h>
void Fibonacci(int);
void Practice1();
void Practice2();
void Practice3();
void Practice4();
void Practice5();
void Practice6();
void Practice7();
void Practice8();
void Practice9();
void Practice10();
void Practice11();
void Practice12();
void Practice13();
void Practice14();
//void Practice15();
void Hanoi();


int main()
{
	Hanoi(5, 'A', 'B', 'C');

	return 0;
}

void Practice1()
{
	int count = 5;
	int sum = 0;
	int i = 0;
	int limit = 1;

	while (i < count)
	{
		int input = 0;
		scanf("%d", &input);

		while (input < limit)
		{
			scanf("%d", &input);
		}
		sum += input;
		++i;
	}
	printf("%d", sum);

}
void Practice2()
{
	int i = 0;
	int line = 5;
	int count = 0;

	while (i < line)
	{
		count = 0;
		while (count < i)
		{
			printf("o");
			++count;
		}
		printf("*\n");
		++i;
	}
}
void Practice3()
{
	int total = 0, num = 1;
	while (num != 0)
	{
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("�հ�: %d \n", total);
}
void Practice4()
{
	int total = 0, num = 1;
	while (num != 0)
	{
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("�հ�: %d \n", total);

}
void Practice5()
{
	int min = 0;
	int max = 100;
	int i = 0;
	int sum = 0;
	do  
	{
		sum += i;
		i += 2;
	} while (i <= max);

	printf("%d\n", sum);
}
void Practice6()
{
	int cur = 2;
	int is = 0;

	do
	{
		is = 1;    // ���ο� ���� ������ ���ؼ�
		while (is < 10)    // �� ���� 1���� 9�� ���� ǥ��
		{
			printf("%d��%d��%d \n", cur, is, cur * is);
			is++;
		}
		cur++;    // ���� ������ �Ѿ�� ���� ����
		printf("\n");
	} while (cur < 10);   // 2�ܺ��� 9�ܱ��� �ݺ�
}
void Practice7()
{
	int min = 0;
	int max = 0;
	int sum = 0;

	scanf("%d %d", &min, &max);

	for (int i = min; i <= max; ++i)
	{
		sum += i;
	}
	printf("%d", sum);
}
void Practice8()
{
	int input = 0;
	int factorial = 1;
	scanf("%d", &input);
	for (int i = 0; i < input; i++)
	{
		factorial *= (i+1);
	}
	printf("%d\n", factorial);
}

void Practice9()
{
	for (int i = 1; i < 100; ++i)
	{
		if (i % 7 == 0 || i % 9 == 0)
			printf("%d\n", i);
	}
}

void Practice10()
{
	int input1 = 0;
	int input2 = 0;

	printf("�� �� ���� �Է� : ");
	scanf("%d %d", &input1, &input2);
	if (input1 < input2)
	{
		printf("%d - %d = %d\n", input2, input1, input2 - input1);
		return;
	}
	printf("%d - %d = %d\n", input1, input2, input1 - input2);
}
void Practice11()
{
	int kor = 0;
	int eng = 0;
	int math = 0;
	int sum = 0;
	scanf("%d %d %d", &kor, &eng, &math);
	sum = kor + eng + math;
	int avg = sum / 3;
	if (avg >= 90)
		printf("%c\n", 'A');
	else if (avg >= 80)
		printf("%c\n", 'B');
	else if (avg >= 70)
		printf("%c\n", 'C');
	else if (avg >= 50)
		printf("%c\n", 'D');
	else
		printf("%c\n", 'F');


}
void Practice12()
{
	for (int i = 1; i < 9; ++i)
	{
		if (i % 2 != 0)
			continue;
		for (int j = 1; j <= i; ++j)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
}

void Practice13()
{
	int a = 0, z = 0;

	for ( a = 0; a < 10; ++a)
	{
		for ( z = 0; z < 10; ++z)
		{
			if ((a * 10 + z) + (z * 10 + a) == 99)
			{
				printf("a : %d z: %d\n", a, z);
			}

		}
	}
	
}
void Practice14()
{

}


void Hanoi(int num , char from, char by, char to)
{
	if (num == 1)
	{
		printf("%d��° ������ %c => %c \n", num, from, to);
	}
	else
	{
		Hanoi(num - 1, from, to, by);
		printf("%d ��° ������ %c => %c \n", num, from, to);
		Hanoi(num - 1, by, from, to);
	}
}



void Fibonacci(int input)
{
	int first = 0;
	int second = 1;

	for (int i = 0; i < input; i++)
	{
		printf("%d ", first);
		int third = first + second;
		first = second;
		second = third;
	}
}