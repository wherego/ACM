//============================================================================
// Name        : Bfs.cpp
// Author      : judyge
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;
int map[5][5];
int vis[5][5];
struct node{
    int x;
    int y;
    int pre;
}edge[100];  //节点队列
int front=0,rear=1;//队头，队尾
int dir[4][2]={{0,-1},{1,0},{0,1},{-1,0}};   //四种方向
void f(int i)//根据pre  倒向追踪法路径
{
    if(edge[i].pre!=-1)
    {
        f(edge[i].pre);
        cout<<"("<<edge[i].x<<", "<<edge[i].y<<")"<<endl;
    }
}
void BFS(int x,int y)
{
    edge[front].x=x;   //开始时节点
    edge[front].y=y;
    edge[front].pre=-1;
    while(front<rear)//队列为空时终止
    {
        int u;
        for(u=0;u<4;u++)    //下一节点---四个方向
        {
        	//从队头取一个  找他的下一节点
            int x=edge[front].x+dir[u][0];
            int y=edge[front].y+dir[u][1];
            //下一节点  如果被遍历---或是墙----或是障碍物
            if(x<0||x>=5||y<0||y>=5||vis[x][y]==1||map[x][y]==1)
                continue;   //找下一个方向
            else  //下一节点  如果没遍历---不是墙----不是障碍物
            {
                vis[x][y]=1;   //下节点设置为遍历过
                map[x][y]=1;
                edge[rear].x=x;//下一节点--入队
                edge[rear].y=y;
                edge[rear].pre=front; //记录他的前一节点
                rear++;
            }
            if(x==4&&y==4)//如果下一个节点为 4，4
                f(front);    // 找到他以前的路径打印 算一个解法
        }
        front++;//对头出队
    }
}
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>map[i][j];   //输入图
        }
    }
    memset(vis,0,sizeof(vis));
    cout<<"("<<"0, 0)"<<endl;
    BFS(0,0);
    cout<<"(4, 4)"<<endl;
    return 0;
}
