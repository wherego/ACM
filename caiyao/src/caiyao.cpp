//============================================================================
// Name        : caiyao.cpp
// Author      : judyge
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//总时间
	int time;
	int m;
	//药的种类数
	cin>>time>>m;

int t[m];   //各种药用的时间数组
int p[m];   //各种药的价值数组

int c[m][time];   //在time时间内 采m种药物的最大价值

int i,j;
   for(i=0;i<m;i++)
       cin>>t[i]>>p[i];//输入各种采药时间 和价值

   for(j=0;j<time+1;j++)   //规定时间内采药
   {
       for(i=0;i<m+1;i++)
      {
          if(j<t[i])
          {
              c[i][j]=c[i-1][j];
              continue;
          }else if(c[i-1][j-t[i]]+p[i]>c[i-1][j])
              c[i][j]=c[i-1][j-t[i]]+p[i];
          else
              c[i][j]=c[i-1][j];
      }
   }

for(int i=0;i<=m;i++)
{
     for(int j=0;j<=time;j++)
    {
     printf("%4d",c[i][j]);
    if(m==j) printf("\n");
    }
}
	return 0;
}
