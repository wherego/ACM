//============================================================================
// Name        : salary.cpp
// Author      : ju
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int m;
	int n;
	cin>>m;
	cin>>n;
	int s[m][n];
	for(int i=0;i<m;i++)
		{
			for(int j=0;j<=n;j++)
			{
	     cin>>s[i][j];

			}
		}


   static  int count=0;
	for(int i=0;i<m;i++)
	{
		int sum=0;
		for(int j=0;j<=n;j++)
		{
      sum+=s[i][j];
      if(sum>count)
      {
    	  count=sum;
      }
		}

	}
cout<<count;
	return 0;
}
