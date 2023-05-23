#include <stdio.h>
void BoardPrint(int (*board)[3],int (*playerX)[3], int(*playerO)[3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == 1 && playerX[i][j] == 1)
			{
				printf("| %c ", 'X');
				continue;
			}

			if (board[i][j] == 1 && playerO[i][j] == 1)
			{
				printf("| %c ", 'O');
				continue;
			}
			printf("| %c ", '\0');

		}
		printf("|\n");
	}

	//printf("| %c | %c | %c |\n", '\0', '\0', '\0');
	//printf("| - | - | - |\n");
	//printf("| %c | %c | %c |\n", '\0', '\0', '\0');
	//printf("| - | - | - |\n");
	//printf("| %c | %c | %c |\n", '\0', '\0', '\0');

}


int CheckCount(int (*player)[3], int playerRow, int playerCol)
{

}

int main()
{
	int playerXrow = 0;
	int playerXcol = 0;
	int playerX[3][3] = { 0 };

	int playerOrow = 0;
	int playerOcol = 0;
	int playerO[3][3] = { 0 };

	int board[3][3] = { 0 };
	int count = 0;
	int playerTurn = 0;
	int emptyCount = 9;

	while (count <2 && emptyCount >0)
	{
		playerTurn = 0;
		if (playerTurn == 0)	// X ����
		{
			printf("Player X, �������� �Է��ϼ���(��[0 - 2]�� ��[0 - 2]) : ");
			scanf("%d %d", &playerXrow, &playerXcol);
		}
	
		//������ ä��� �ߺ� �˻� , �߸��� �Է�
		if (board[playerXrow][playerXcol] == 1 || playerXrow > 2 || playerXcol > 2 || playerXrow < 0 || playerXcol < 0)
		{
			printf("�߸��� ������! �ٽ� �õ����ּ���.\n");
			continue;
		}

		// ������ ä���
		board[playerXrow][playerXcol] = 1;
		playerX[playerXrow][playerXcol] = 1;

		// ��ĭ
		emptyCount--;

		count = CheckCount(playerX, playerXrow, playerXcol);
		// ������ ���
		BoardPrint(board, playerX, playerO);

		count = 0;

		//�ϳѱ�
		playerTurn++;
		while (count < 2 &&playerTurn ==1 && emptyCount >0)
		{
			if (playerTurn == 1)	// O ����
			{
				printf("Player O, �������� �Է��ϼ���(��[0 - 2]�� ��[0 - 2]) : ");
				scanf("%d %d", &playerXrow, &playerXcol);
			}

			//������ ä��� �ߺ� �˻� , �߸��� �Է�
			if (board[playerXrow][playerXcol] == 1 || playerXrow > 2 || playerXcol > 2 || playerXrow < 0 || playerXcol < 0)
			{
				printf("�߸��� ������! �ٽ� �õ����ּ���.\n");
				continue;
			}

			// ������ ä���
			board[playerOrow][playerOcol] = 1;
			playerO[playerOrow][playerOcol] = 1;


			// ��ĭ
			emptyCount--;

			count = CheckCount(playerO, playerOrow, playerOcol);

			// ������ ���
			BoardPrint(board, playerX, playerO);

			count = 0;



			// �� ����
			playerTurn = 0;
		}



		//���


	}
	printf("���� ����");
	return 0;
}