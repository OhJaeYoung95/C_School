#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ����1
void Print1(int(*arr)[4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
}
void ArrayRotate(int(*arr)[4])
{
	printf("90�� ȸ��\n");
	int temp[4][4] = { 0 };
	for (int i = 3; i >= 0; i--)
	{
		for (int j = 0; j < 4; j++)
		{
			temp[j][i] = arr[3-i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = temp[i][j];
		}
	}

}
void Practice1()
{
	int arr[4][4] = { {1,2,3,4,},
					{5, 6, 7, 8},
					{9, 10, 11, 12},
					{13, 14, 15, 16} };
	Print1(arr);
	ArrayRotate(arr);
	Print1(arr);
	ArrayRotate(arr);
	Print1(arr);
	ArrayRotate(arr);
	Print1(arr);
}

// ����2
void Print2(int(*arr)[10], int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
}
void SnailSort(int(*arr)[10])
{
	int num = 0;
	int count = 1;
	int side = 0;
	printf("���� �Է� : ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		arr[0][i] = count++;
	}
	side++;
	for (int i = 0+side; i < num; i++)
	{
		arr[i][num-1] = count++;
	}

	for (int i = num-1; i >=0; i--)
	{
		arr[num-1][i-1] = count++;
	}

	for (int i = num-1; i >= 1; i--)
	{
		arr[i-1][0] = count++;
	}

	Print2(arr, num);
}
void Practice2()
{
	int arr[10][10] = { 0 };

	SnailSort(arr);
}

// ����3
void Practice3()
{
	srand((unsigned int)time(NULL));
	printf("������ ���� 0���� %d����\n", RAND_MAX&99);
	for (int i = 0; i < 5; i++)
		printf("%d ", rand() % 100);
}

// ����4
void Practice4()
{
	srand((unsigned int)time(NULL));
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;

	printf("�ֻ���1 �� ��� : %d\n", dice1);
	printf("�ֻ���2 �� ��� : %d\n", dice2);
}

// ����5
void Practice5()
{
	// �÷��̾� ����������
	int playerSelect = 0;

	// ��ǻ�� ����������
	int comSelect = 0;

	// ���к���
	int win = 0;
	int lose = 0;
	int draw = 0;

	srand((unsigned int)time(NULL));
	while (lose < 1)
	{
		comSelect = rand() % 3 + 1;

		printf("������ 1 ������ 2, ���� 3 : ");
		scanf("%d", &playerSelect);	

		if (playerSelect < 1 || playerSelect >= 4)
			continue;
		switch (playerSelect - comSelect)
		{
			case 2:
				printf("����� �� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�!\n");
				win++;
				break;
			case 1:
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�!\n");
				lose++;
				break;
			case 0:
				if(playerSelect ==1)
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�!\n");
				else if(playerSelect ==2)
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�!\n");
				else if(playerSelect ==3)
				printf("����� �� ����, ��ǻ�ʹ� �� ����, �����ϴ�!\n");
				draw++;
				break;
			case -1:
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�!\n");
				win++;
				break;
			case -2:
				printf("����� ���� ����, ��ǻ�ʹ� �� ����, �����ϴ�!\n");
				lose++;
				break;
		}
	}

	printf("������ ��� : %d��, %d��\n", win, draw);
}

// ����6
void Practice6()
{
	int strike = 0;
	int ball = 0;

	int playerSelect[3] = { 0 };
	int tryNum = 0;

	srand((unsigned int)time(NULL));
	int comSelect[3] = { rand() % 10, rand() % 10, rand() % 10 };
	while (comSelect[0] == comSelect[1] ||
		comSelect[1] == comSelect[2] ||
		comSelect[0] == comSelect[2])
	{
		comSelect[1] = rand() % 10;
		comSelect[2] = rand() % 10;
	}
	while (strike < 3)
	{
		strike = 0;
		ball = 0;
		printf("�÷��̾� ���� �Է� : ");
		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &playerSelect[i]);
		}

		if (playerSelect[0] == playerSelect[1] ||
			playerSelect[1] == playerSelect[2] || 
			playerSelect[0] == playerSelect[2])
		{
			printf("�߸��� �� �Է� : \n");
			continue;
		}

		//printf("��ǻ�� ��� %d %d %d", comSelect[0], comSelect[1], comSelect[2]);
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (playerSelect[i] == comSelect[j] && i == j)
					strike++;
				else if (playerSelect[i] == comSelect[j])
					ball++;
			}
		}
		tryNum++;
		printf("%d��° ���� ��� : %dStrike %dBall !!\n", tryNum, strike, ball);
	}



}

int main()
{
	Practice1();
	return 0;
}