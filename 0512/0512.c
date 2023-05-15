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

	printf("총점 : %d, 평균 : %d", sum, sum / 5);

}
void EnemyDamage()
{
	// 몬스터의 공격력 입력
	// 입력한 값은 배열에 저장
	// 총 공격력과 평균 공격력 구하기

	int enemyAttack[10];
	int input = 0;
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("%2d번째 몬스터 공격력 입력 : ", i+1);
		scanf("%d", &input);
		enemyAttack[i] = input;
		sum += input;
	}

	printf("몬스터의 총 공격력 합 : %d, 몬스터의 총 공격력 평균 : %d", sum, sum / 10);

}
void ABCCopy()
{
	// A B C 복사
	// 출력값 : A B C C B A

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
	// 난수발생
	srand((unsigned int)time(NULL));	// 인자값은 
	// 현재시간을 기반으로 seed값을 만들어준다.
	// 시간은 흐르므로 seed값은 계속 달라진다.
	// time은 현재시간 정보를 호출한다


	int random = rand();	// C표준 난수 발생함수 호출할때마다 정수형태의 난수를 return
	int randNum = rand()%10;	// 0~9까지 난수 발생 / 나머지 연산자로 인해서

	printf("%d\n", random);		// 랜덤 난수 출력 / 매번 출력하면 같은 수가 나온다.
	printf("%d", randNum);		// 랜덤 난수 출력 / 매번 출력하면 같은 수가 나온다.
}






/*
1. 가위바위보 게임
플레이어와 컴퓨터가 존재함. / 입력 필요 / 난수 2개
10판만 할 수 있다. for문 / 종료조건 : 10판
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

		// 게임시작
		printf("-----------------------------------------------------\n");
		printf("%d번째 가위바위보 시작! \n", playTryNum
		);
		printf("%d : 가위, %d : 바위, %d : 보\n", 0, 1, 2);

		// 플레이어 가위바위보 하기
		printf("플레이어 입력 :");
		scanf("%d", &playerSelect);

		// 플레이어 입력값 오류 다시하기
		if (playerSelect < 0 || playerSelect > 2)
		{
			printf("잘못된 수 입력\n");
			printf("다시 입력하시오\n");
			continue;
		}

		// 컴퓨터가 플레이어 가위바위보 정보 띄우기
		srand((unsigned int)time(NULL));
		int computerSelect = rand() % 3;
		if (playerSelect == 0)
			printf("플레이어 : 가위\n");
		else if (playerSelect == 1)
			printf("플레이어 : 바위\n");
		else if (playerSelect == 2)
			printf("플레이어 : 보\n");
		if (computerSelect == 0)
			printf("컴퓨터 : 가위\n");
		else if (computerSelect == 1)
			printf("컴퓨터 : 바위\n");
		else if (computerSelect == 2)
			printf("컴퓨터 : 보\n");

		// 게임결과
		// 비겼을때
		if (playerSelect == computerSelect)
		{
			printf("비겼음");
			draw++;
			printf("플레이어가 이긴 횟수 : %d / 컴퓨터가 이긴 횟수 : %d 비긴 횟수 : %d\n", playerWin, computerWin, draw);
			playTryNum++;
		}

		// 플레이어 승리
		if ((playerSelect == 0 && computerSelect == 2 ) || 
			(playerSelect == 1 && computerSelect == 0) || 
			(playerSelect == 2 && computerSelect == 1))
		{
			printf("플레이어 승리\n");
			playerWin++;
			printf("플레이어가 이긴 횟수 : %d / 컴퓨터가 이긴 횟수 : %d 비긴 횟수 : %d\n", playerWin, computerWin, draw);
			playTryNum++;
			continue;
		}

		// 컴퓨터 승리
		if ((computerSelect == 0 && playerSelect == 2) ||
			(computerSelect == 1 && playerSelect == 0) ||
			(computerSelect == 2 && playerSelect == 1))
		{
			printf("컴퓨터 승리\n");
			computerWin++;
			printf("플레이어가 이긴 횟수 : %d / 컴퓨터가 이긴 횟수 : %d 비긴 횟수 : %d\n", playerWin, computerWin, draw);
			playTryNum++;
			continue;
		}
	}
}


/*
* 2. 컴퓨터가 낸 숫자 맞추기 게임
0~20까지 뽑아낸다.
컴퓨터가 낸 숫자 외에는 플레이어가 입력할 수 없다. / 예외처리 0~20이외를 쓰면
플레이어는 소지금을 가지고 있음 . 만원
플레이어는 배팅할 수 있다.
Up & down
배팅액은 한판당 최소 1000원
배팅액 차감은 확률로
맞출경우 내가 배팅한 금액 x2 / 틀릴경우 틀릴때마다 배팅한 금액 차감.
내가 가진 소지금보다 배팅을 더할 수 없다.

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
		// 컴퓨터 1~999까지 숫자 고르기
		srand((unsigned int)time(NULL));
		int computerPickNum = rand() % 999;

		//printf("컴퓨터 픽%d", computerPickNum);
		// 배팅액 설정
		printf("게임 시작!\n");
		printf("배팅액을 설정하세요 : ");
		scanf("%d", &playerBat);

		// 배팅액 조건 설정
		if (playerMoney < playerBat && playerBat <= 1000)
		{
			while (playerMoney < playerBat && playerBat <= 1000)
			{
				printf("배팅액을 다시 설정하세요 : ");
				scanf("%d", playerBat);
			}
		}

		// 정답 맞추기 전까지 반복실행
		while (playerPickNum != computerPickNum)
		{
			if (playerMoney < 0)
			{
				printf("플레이어 파산!\n");
				break;
			}

			// 플레이어 숫자 뽑기
			printf("--------------------------\n");
			printf("플레이어 숫자 뽑기 : ");
			scanf("%d", &playerPickNum);
			printf("플레이어가 뽑은 숫자 : %d \n", playerPickNum);
			
			// 플레이어가 범위 밖 숫자 선택시 재선택
			if (playerPickNum < 0 || playerPickNum > 999)
			{
				printf("잘못된 카드를 뽑았다\n");
				printf("카드를 1~999사이에서 재선택 해주세요\n");
				continue;
			}


			// 크리티컬 확률 설정
			int criticalBatMoney = rand()%temp;


			// 플레이어 숫자 와 컴퓨터 숫자 비교 
			if (playerPickNum > computerPickNum)
			{
				if (criticalBatMoney == 0)
				{
					printf("Down!\n");
					printf("크리티컬 발생!\n");
					playerMoney -= (playerBat * 2);
					printf("플레이어 소지금 : %d\n", playerMoney);
					temp = 5;
					continue;
				}
				playerMoney -= (playerBat/2);
				printf("Down!\n");
				printf("플레이어 소지금 : %d\n", playerMoney);
				temp--;

			}
			else if (playerPickNum < computerPickNum)
			{
				if (criticalBatMoney == 0)
				{
					printf("Up!\n");
					printf("크리티컬 발생!\n");
					playerMoney -= (playerBat * 2);
					printf("플레이어 소지금 : %d\n", playerMoney);
					temp = 5;

					continue;
				}
				playerMoney  -= (playerBat/2);
				printf("Up!\n");
				printf("플레이어 소지금 : %d\n", playerMoney);
				temp--;
			}
			else
			{
				playerMoney += (playerBat * 2);
				printf("정답!\n");
				printf("플레이어 소지금 : %d\n", playerMoney);
				break;
			}
		}
	}
}



/* 종료 조건 : 10판 / 소지금 0원(배팅할 수 없는 경우)

3. 숫자야구 게임	(배열써야함)
컴퓨터는 0~9까지 랜덤한 세자리를 뽑는다. / int computer[3]
플레이어는 이 숫자를 맞춘다.
컴퓨터 0 1 2 / 플레이어 1 2 3 => 2ball
컴퓨터 3 5 7 / 플레이어 5 1 7 => 1strike 1ball

종료 : 3strike
이중포문?
*/

void BaseballGame()
{

	int ball = 0;
	int strike = 0;

	// 컴퓨터 공 세개 설정
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

	// 게임 종료 조건
	while (strike <3)
	{
		strike = 0;
		ball = 0;

		// 플레이어 숫자 입력
		printf("플레이어 숫자 세개 입력 :");
		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &player[i]);
		}

		if (player[0] == player[1] || player[1] == player[2] || player[2] == player[0])
		{
			printf("플레이어 숫자 재입력 (숫자 중복불가능):\n");
			continue;
		}

		// 게임 종료 조건 확인
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
		printf("스트라이크 : %d 볼 : %d\n", strike, ball);
	}
	printf("게임 클리어\n");
}



