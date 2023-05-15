#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void StudentScore();
void EnemyDamage();
void ABCCopy();
void RandNum();
void RockPaperScissors();
void GuessTheNumberNBat();
void BaseballGame();


int main(void)
{
	BaseballGame();
	return 0;
}

void StudentScore()
{
	int st[5] = { 60, 10, 40, 40, 100 };
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		sum += st[i];
	}

	printf("���� : %d, ��� : %d", sum, sum / 5);

}
void EnemyDamage()
{
	// ������ ���ݷ� �Է�
	// �Է��� ���� �迭�� ����
	// �� ���ݷ°� ��� ���ݷ� ���ϱ�

	int enemyAttack[10];
	int input = 0;
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("%2d��° ���� ���ݷ� �Է� : ", i+1);
		scanf("%d", &input);
		enemyAttack[i] = input;
		sum += input;
	}

	printf("������ �� ���ݷ� �� : %d, ������ �� ���ݷ� ��� : %d", sum, sum / 10);

}
void ABCCopy()
{
	// A B C ����
	// ��°� : A B C C B A

	char source[3] = { 'A', 'B', 'C'};
	char input[7] = {0};
	for (int i = 0; i < 3; i++)
	{
		input[i] = source[i]; //0 1 2 = 0 1 2
		input[i+3] = source[2-i]; //3 4 5 = 2 1 0
	}
	printf("%s", input);
}
void RandNum()
{
	// �����߻�
	srand((unsigned int)time(NULL));	// ���ڰ��� 
	// ����ð��� ������� seed���� ������ش�.
	// �ð��� �帣�Ƿ� seed���� ��� �޶�����.
	// time�� ����ð� ������ ȣ���Ѵ�


	int random = rand();	// Cǥ�� ���� �߻��Լ� ȣ���Ҷ����� ���������� ������ return
	int randNum = rand()%10;	// 0~9���� ���� �߻� / ������ �����ڷ� ���ؼ�

	printf("%d\n", random);		// ���� ���� ��� / �Ź� ����ϸ� ���� ���� ���´�.
	printf("%d", randNum);		// ���� ���� ��� / �Ź� ����ϸ� ���� ���� ���´�.
}






/*
1. ���������� ����
�÷��̾�� ��ǻ�Ͱ� ������. / �Է� �ʿ� / ���� 2��
10�Ǹ� �� �� �ִ�. for�� / �������� : 10��
*/
void RockPaperScissors()
{
	int playerSelect = 0;
	int playerWin = 0;
	int computerWin = 0;
	int draw = 0;
	int playTryNum = 1;

	while (playTryNum <= 10)
	{

		// ���ӽ���
		printf("-----------------------------------------------------\n");
		printf("%d��° ���������� ����! \n", playTryNum
		);
		printf("%d : ����, %d : ����, %d : ��\n", 0, 1, 2);

		// �÷��̾� ���������� �ϱ�
		printf("�÷��̾� �Է� :");
		scanf("%d", &playerSelect);

		// �÷��̾� �Է°� ���� �ٽ��ϱ�
		if (playerSelect < 0 || playerSelect > 2)
		{
			printf("�߸��� �� �Է�\n");
			printf("�ٽ� �Է��Ͻÿ�\n");
			continue;
		}

		// ��ǻ�Ͱ� �÷��̾� ���������� ���� ����
		srand((unsigned int)time(NULL));
		int computerSelect = rand() % 3;
		if (playerSelect == 0)
			printf("�÷��̾� : ����\n");
		else if (playerSelect == 1)
			printf("�÷��̾� : ����\n");
		else if (playerSelect == 2)
			printf("�÷��̾� : ��\n");
		if (computerSelect == 0)
			printf("��ǻ�� : ����\n");
		else if (computerSelect == 1)
			printf("��ǻ�� : ����\n");
		else if (computerSelect == 2)
			printf("��ǻ�� : ��\n");

		// ���Ӱ��
		// �������
		if (playerSelect == computerSelect)
		{
			printf("�����");
			draw++;
			printf("�÷��̾ �̱� Ƚ�� : %d / ��ǻ�Ͱ� �̱� Ƚ�� : %d ��� Ƚ�� : %d\n", playerWin, computerWin, draw);
			playTryNum++;
		}

		// �÷��̾� �¸�
		if ((playerSelect == 0 && computerSelect == 2 ) || 
			(playerSelect == 1 && computerSelect == 0) || 
			(playerSelect == 2 && computerSelect == 1))
		{
			printf("�÷��̾� �¸�\n");
			playerWin++;
			printf("�÷��̾ �̱� Ƚ�� : %d / ��ǻ�Ͱ� �̱� Ƚ�� : %d ��� Ƚ�� : %d\n", playerWin, computerWin, draw);
			playTryNum++;
			continue;
		}

		// ��ǻ�� �¸�
		if ((computerSelect == 0 && playerSelect == 2) ||
			(computerSelect == 1 && playerSelect == 0) ||
			(computerSelect == 2 && playerSelect == 1))
		{
			printf("��ǻ�� �¸�\n");
			computerWin++;
			printf("�÷��̾ �̱� Ƚ�� : %d / ��ǻ�Ͱ� �̱� Ƚ�� : %d ��� Ƚ�� : %d\n", playerWin, computerWin, draw);
			playTryNum++;
			continue;
		}
	}
}


/*
* 2. ��ǻ�Ͱ� �� ���� ���߱� ����
0~20���� �̾Ƴ���.
��ǻ�Ͱ� �� ���� �ܿ��� �÷��̾ �Է��� �� ����. / ����ó�� 0~20�ܸ̿� ����
�÷��̾�� �������� ������ ���� . ����
�÷��̾�� ������ �� �ִ�.
Up & down
���þ��� ���Ǵ� �ּ� 1000��
���þ� ������ Ȯ����
������ ���� ������ �ݾ� x2 / Ʋ����� Ʋ�������� ������ �ݾ� ����.
���� ���� �����ݺ��� ������ ���� �� ����.

*/

void GuessTheNumberNBat()
{
	int playerMaxMoney = 10000;
	int playerMoney = 10000;
	int playerBat = 0;
	int playerPickNum = 0;
	int temp = 5;

	while (playerMoney > 0)
	{
		// ��ǻ�� 1~999���� ���� ����
		srand((unsigned int)time(NULL));
		int computerPickNum = rand() % 999;

		//printf("��ǻ�� ��%d", computerPickNum);
		// ���þ� ����
		printf("���� ����!\n");
		printf("���þ��� �����ϼ��� : ");
		scanf("%d", &playerBat);

		// ���þ� ���� ����
		if (playerMoney < playerBat && playerBat <= 1000)
		{
			while (playerMoney < playerBat && playerBat <= 1000)
			{
				printf("���þ��� �ٽ� �����ϼ��� : ");
				scanf("%d", playerBat);
			}
		}

		// ���� ���߱� ������ �ݺ�����
		while (playerPickNum != computerPickNum)
		{
			if (playerMoney < 0)
			{
				printf("�÷��̾� �Ļ�!\n");
				break;
			}

			// �÷��̾� ���� �̱�
			printf("--------------------------\n");
			printf("�÷��̾� ���� �̱� : ");
			scanf("%d", &playerPickNum);
			printf("�÷��̾ ���� ���� : %d \n", playerPickNum);
			
			// �÷��̾ ���� �� ���� ���ý� �缱��
			if (playerPickNum < 0 || playerPickNum > 999)
			{
				printf("�߸��� ī�带 �̾Ҵ�\n");
				printf("ī�带 1~999���̿��� �缱�� ���ּ���\n");
				continue;
			}


			// ũ��Ƽ�� Ȯ�� ����
			int criticalBatMoney = rand()%temp;


			// �÷��̾� ���� �� ��ǻ�� ���� �� 
			if (playerPickNum > computerPickNum)
			{
				if (criticalBatMoney == 0)
				{
					printf("Down!\n");
					printf("ũ��Ƽ�� �߻�!\n");
					playerMoney -= (playerBat * 2);
					printf("�÷��̾� ������ : %d\n", playerMoney);
					temp = 5;
					continue;
				}
				playerMoney -= (playerBat/2);
				printf("Down!\n");
				printf("�÷��̾� ������ : %d\n", playerMoney);
				temp--;

			}
			else if (playerPickNum < computerPickNum)
			{
				if (criticalBatMoney == 0)
				{
					printf("Up!\n");
					printf("ũ��Ƽ�� �߻�!\n");
					playerMoney -= (playerBat * 2);
					printf("�÷��̾� ������ : %d\n", playerMoney);
					temp = 5;

					continue;
				}
				playerMoney  -= (playerBat/2);
				printf("Up!\n");
				printf("�÷��̾� ������ : %d\n", playerMoney);
				temp--;
			}
			else
			{
				playerMoney += (playerBat * 2);
				printf("����!\n");
				printf("�÷��̾� ������ : %d\n", playerMoney);
				break;
			}
		}
	}
}



/* ���� ���� : 10�� / ������ 0��(������ �� ���� ���)

3. ���ھ߱� ����	(�迭�����)
��ǻ�ʹ� 0~9���� ������ ���ڸ��� �̴´�. / int computer[3]
�÷��̾�� �� ���ڸ� �����.
��ǻ�� 0 1 2 / �÷��̾� 1 2 3 => 2ball
��ǻ�� 3 5 7 / �÷��̾� 5 1 7 => 1strike 1ball

���� : 3strike
��������?
*/

void BaseballGame()
{

	int ball = 0;
	int strike = 0;

	// ��ǻ�� �� ���� ����
	srand((unsigned int)time(NULL));
	int computerSelect[3] = { rand() % 10, rand() % 10, rand() % 10 };
	while (computerSelect[0] == computerSelect[1] || 
		computerSelect[1] == computerSelect[2] || 
		computerSelect[2] == computerSelect[0])
	{
		for (int i = 0; i < 2; i++)
		{
			computerSelect[i + 1] = rand() % 10;
		}
	}


	int player[3] = { 0};

	// ���� ���� ����
	while (strike <3)
	{
		strike = 0;
		ball = 0;

		// �÷��̾� ���� �Է�
		printf("�÷��̾� ���� ���� �Է� :");
		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &player[i]);
		}

		if (player[0] == player[1] || player[1] == player[2] || player[2] == player[0])
		{
			printf("�÷��̾� ���� ���Է� (���� �ߺ��Ұ���):\n");
			continue;
		}

		// ���� ���� ���� Ȯ��
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (player[i] == computerSelect[j] && i == j)
				{
					strike++;
				}
				else if (player[i] == computerSelect[j])
				{
					ball++;
				}
			}
		}
		printf("��Ʈ����ũ : %d �� : %d\n", strike, ball);
	}
	printf("���� Ŭ����\n");
}



