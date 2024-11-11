//#include "game.h"
//char Full(char board[ROW][COL],int rol,int col)
//{
//	int i = 0;
//	int j = 0;
//	if (board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' && board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' ' && board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ')
//	{
//		return 'T';
//	}
//	return 'C';
//}
//void InitBoard(char board[ROW][COL], int rol, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rol; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}		
//}
//void DisplayBoard(char board[ROW][COL], int rol, int col)
//{
//	int i = 0;
//	for (i = 0; i < rol; i++)
//	{
//		/*printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if (i < rol - 1)
//		{
//			printf("---|---|---\n");
//		}*/
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//			{
//				printf("|");
//			}
//		}
//		printf("\n");
//		if (i < rol - 1)
//		{
//			int j = 0;
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//				{
//					printf("|");
//				}
//			}
//			printf("\n");
//		}
//	}
//}
//
//void PlayerMove(char board[ROW][COL], int rol, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("玩家先手:\n");
//
//	while (1)
//	{
//		printf("输入坐标：");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= rol && y >= 1 && y <= col)
//		{
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("坐标被占用\n");
//			}
//		}
//		else
//		{
//			printf("非法输入\n");
//		}
//	}
//}
//
//void ComputerMove(char board[ROW][COL], int rol, int col)
//{
//	printf("电脑回合\n");
//	int x, y = 0;
//	do
//	{
//		x = rand() % ROW;
//		y = rand() % COL;
//	} while (board[x][y] != ' ');
//	board[x][y] = '#';
//}
//char IsWin(char board[ROW][COL], int rol, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rol; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0]!=' ')
//		{
//			if (board[i][0] == '*')
//			{
//				printf("Player Win\n");
//				return 'T';
//			}
//			else if (board[i][0] == '#')
//			{
//				printf("Computer Win\n");
//				return 'T';
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
//		{
//			if (board[i][0] == '*')
//			{
//				printf("Player Win\n");
//				return 'T';
//			}
//			else if (board[i][0] == '#')
//			{
//				printf("Computer Win\n");
//				return 'T';
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//	if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') || (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' '))
//	{
//		if (board[i][0] == '*')
//		{
//			printf("Player Win\n");
//			return 'T';
//		}
//		else if (board[i][0] == '#')
//		{
//			printf("Computer Win\n");
//			return 'T';
//		}
//		else
//		{ }
//	}
//	if (Full(board, rol, col)=='T')
//	{
//		return 'T';
//	}
//	return 'C';
//}