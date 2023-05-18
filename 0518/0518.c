#include <stdio.h>
// ����1
void Practice1();

// ����2
void Practice2();

// ����3
void Practice3();

int main()
{
	Practice3();
	return 0;
}

// ����1
void Practice1()
{
	int gugudan[3][9] = { 0 };
	int danLen = sizeof(gugudan) / sizeof(int) / 9;
	int lineLen = sizeof(gugudan) / sizeof(int) / 3;

	for (int dan = 0; dan < danLen; dan++)
	{
		for (int line = 0; line < lineLen; line++)
		{
			gugudan[dan][line] = (dan+2) *(line+1);
		}
	}

	for (int dan = 2; dan < 5; dan++)
	{
		printf("%d�� ��� \n", dan);
		for (int line = 1; line < 10; line++)
		{
			printf("%d x %d = %d \n", dan, line, dan*line);
		}
	}
}

// ����2
void Practice2()
{
	int arrA[2][4] = { 0 };
	int arrB[4][2] = { 0 };
	int init = 1;
	int arrALen = sizeof(arrA) / sizeof(int);	// 8

	printf("ArrA\n");
	for (int height = 0; height < arrALen/4; height++)
	{
		for (int width = 0; width < arrALen/2; width++)
		{
			arrA[height][width] = init++;
		}
	}

	for (int height = 0; height < arrALen / 4; height++)
	{
		for (int width = 0; width < arrALen / 2; width++)
		{
			printf("%d ", arrA[height][width]);
		}
		printf("\n");
	}

	printf("ArrB\n");

	for (int height = 0; height < arrALen / 2; height++)
	{
		for (int width = 0; width < arrALen / 4; width++)
		{
			arrB[height][width] = arrA[width][height];
		}
	}
	for (int width = 0; width < arrALen /2; width++)
	{
		for (int height = 0; height < arrALen /4; height++)
		{
			printf("%d ", arrB[width][height]);
		}
		printf("\n");
	}

}

// ����3
void Practice3()
{
	int score[5][5] = { 0 };
	int sum = 0;

	// ��� ���� ���� �Է�
	for (int human = 0; human < 4; human++)
	{
		printf("%d��° ��� 4���� ���� �Է� : ", human + 1);
		for (int  subject= 0; subject < 4; subject++)
		{
			scanf("%d", &score[human][subject]);
		}
	}

	for (int human = 0; human < 4; human++)
	{
		sum = 0;
		for (int subject = 0; subject < 4; subject++)
		{
			sum += score[human][subject];
		}
		score[human][4] = sum;
	}
	for (int human = 0; human < 5; human++)
	{
		sum = 0;
		for (int subject = 0; subject < 4; subject++)
		{
			sum += score[subject][human];
		}
		score[4][human] = sum;
	}
	for (int human = 0; human < 5; human++)
	{
		for (int subject = 0; subject < 5; subject++)
		{
			printf("%3d ", score[human][subject]);
		}
		printf("\n");
	}


}