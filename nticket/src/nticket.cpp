//============================================================================
// Name        : nticket.cpp
// Author      : judyge
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int m;
	cin>>m;
	int n;
	cin>>n;

int sum=0;

for(int j=m-1;j>0;j--)
{
	if(j>=n)
	{sum+=n;}
	else
	{  sum+=j;    }
}
cout<<sum;
return 0;
}
