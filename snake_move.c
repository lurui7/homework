//贪吃蛇实验报告 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SNAKE_MAX_LENGTH 20
#define SNAKE_HEAD 'H'
#define SNAKE_BODY 'X'
#define BLANK_CELL ' '
#define SNAKE_FOOD '$'
#define WALL_CELL '*'

char map[12][12]={
	"***********",
	"*XXXXH    *",
	"*         *",
	"*         *",
	"*         *",
	"*         *",
	"*         *",
	"*         *",
	"*         *",
	"*         *",
	"*         *",
	"***********"
};

int snakeY[SNAKE_MAX_LENGTH]={1,2,3,4,5};
int snakeX[SNAKE_MAX_LENGTH]={1,1,1,1,1};//蛇身初始位置 
int snakelength = 5;//初始长度
int gamerunning = 1;// 判断游戏是否继续

void  GameOver(void){
	char map_GG[12][12]={
      "***********",
      "*         *",
      "*         *",
      "*         *",
      "*Game Over*",
      "*         *",
      "*         *",
      "*         *",
      "*         *",
      "*         *",
      "*         *",
      "***********"
  };
	gamerunning = 0;
	system("cls");
  	for(int i = 0;i < 12;i++){
      	printf("%s\n",map_GG[i]);
  	}
}

void snakeMove(char control){
		if(map[snakeX[snakelength - 1]][snakeY[snakelength - 1]] == WALL_CELL || 
				map[snakeX[snakelength - 1]][snakeY[snakelength - 1]] == SNAKE_BODY){
					GameOver();
		}
		if(gamerunning == 1){
			for(int i = 0;i < snakelength - 1;++ i)
				map[snakeX[i]][snakeY[i]] = BLANK_CELL;//原来位置清空
			
			int presnakeX = snakeX[snakelength - 1];
			int presnakeY = snakeY[snakelength - 1];//记录蛇头的位置
			switch(control){
				case'w':
				case'W':
					snakeX[snakelength - 1]--;
					break;
				case's':
				case'S':
					snakeX[snakelength - 1]++;
					break;
				case'a':
				case'A':
					snakeY[snakelength - 1]--;
					break;
				case'd':
				case'D':
					snakeY[snakelength - 1]++;
					break; 
				default:
					break;
			}
			
			for(int j = 0;j < snakelength - 2;++j){//将蛇的每节身体都移动到上一节的位置
				snakeX[j] = snakeX[j + 1];
				snakeY[j] = snakeY[j + 1]; 	
			}
			snakeX[snakelength - 2] = presnakeX;
			snakeY[snakelength - 2] = presnakeY;
			
			map[snakeX[snakelength - 1]][snakeY[snakelength - 1]] = SNAKE_HEAD;//将新出现的头打出 
			for(int i = snakelength - 2;i >= 2;--i)
				map[snakeX[i]][snakeY[i]] = SNAKE_BODY;//打出新的身体 
		}
}

void output(){
	system("cls");
	for(int i = 0;i < 12;++i)
		printf("%s\n",map[i]);
} 

int main(void){
	output();
	char control = 0;
	while(gamerunning){
		scanf("%c",&control);
		snakeMove(control);
		output();
	}
}