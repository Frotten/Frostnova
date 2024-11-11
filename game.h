#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
void InitBoard(char board[ROW][COL], int rol, int col);
void DisplayBoard(char board[ROW][COL], int rol, int col);
void PlayerMove(char board[ROW][COL], int rol, int col);
void ComputerMove(char board[ROW][COL], int rol, int col);
char IsWin(char board[ROW][COL], int rol, int col);