//============================================================================
// Name        : juzhen.cpp
// Author      : judyge
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {


	int N;
	cin>>N;
	while(N--)
{
	int n;
	int m;
	cin>>n>>m;
	int a[1000][1000];
	for(int i=0;i<1000;i++)
	{
      a[0][i]=i+1;
	}

	for(int i=1;i<1000;i++)
	{
		for(int j=0;j<1000;j++)
		{
			for(int k=0;k<j;k++)
			{
            a[i][j]+=a[i-1][k];
			}
		}
	}

	cout<<a[n-1][m-1]%20140913;
}
	return 0;
}
