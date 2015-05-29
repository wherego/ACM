//============================================================================
// Name        : bfs2.cpp
// Author      : judyge
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<stdio.h>
//四个方向
const int di[4] = {0,1,0,-1},
          dj[4] = {1,0,-1,0};
//地图
unsigned maze[5][5] = {
    2, 1, 0, 0, 0,
    0, 1, 0, 1, 0,
    0, 0, 0, 0, 0,
    0, 1, 1, 1, 0,
    0, 0, 0, 1, 0},
    head = 0, tail = 1;
//节点队列
struct { int i, j; } que[23] = {0};

void print_maze(void)
{
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
            printf("%d ", maze[i][j]);
        putchar('\n');
    }
    printf("*********\n");
}//输出路径

int main(void)
{
    while (head != tail) {
        head = (head + 1) % 23;   //头节点出队
        int i;
        for (i = 0; i < 4; i++)
        	//如果下一节点不是墙 不是障碍物 没有被遍历
            if (que[head].i + di[i] >= 0 && que[head].i + di[i] < 5
                && que[head].j + dj[i] >= 0 && que[head].j +dj[i] < 5
                && maze[que[head].i + di[i]][que[head].j +dj[i]] == 0)
            {
            	// 下一节点入队
                    que[tail = (tail + 1) % 23].i = que[head].i + di[i];
                    que[tail].j = que[head].j +dj[i];

                    maze[que[head].i + di[i]][que[head].j +dj[i]] = 2;
                   //标记已经遍历过

                    if (que[head].i + di[i] == 4 && que[head].j +dj[i] == 4) {
                        printf("Have path.\n");//如果找到出口
              }
            }
        print_maze();   //打印地图状况
    }
    printf("No path.\n");
    return 0;
}
