#include<stdio.h>
#include<conio.h>
#include<time.h>
#include "blitz.h"

//在畫面上印出遊戲的盤面
void showColors(COLORREF plat[][ColCount]);
void getPos(COLORREF plat[][ColCount], int *r, int *c);

void getPos(COLORREF plat[][ColCount], int *r, int *c);

void main()
{
	//遊戲的盤面
	COLORREF plat[RowCount]
	[ColCount];
	srand(time(NULL));
		
	getch();
	//取得視窗
	int result = initial();
	if(result == -1)
		printf("ERROR\n");
	else
	{
		while(1)
		{
			int ar = 0;
			int ac = 0;
			getColors(plat);
			showColors(plat);
			getPos(plat, &ar, &ac);
			clickPlat(ar, ac);
			Sleep(200); //休息 0.2 秒
		}
	}
}


void getPos(COLORREF plat[][ColCount], int *r, int *c)
{

	//利用隨機的方式選一個位置
	*r =  ColCount;
	*c =  RowCount;	
}


void showColors(COLORREF plat[][ColCount])
{

	for(int i = 0; i < RowCount; i++)
	{
		for(int j = 0; j < ColCount; j++)
		{
			printf("%d  ", plat[i][j]);
		}
		printf("\n");
	}
	printf("=========================================================================\n");
}


