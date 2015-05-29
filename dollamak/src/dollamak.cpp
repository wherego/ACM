//============================================================================
// Name        : dollamak.cpp
// Author      : judyge
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int n;
	cin>>n;
	int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
	}

int dolla=100;
int mak;
int j=0;
for(j;j<n;j++)
{   int tmp=j;
    mak=a[j];
	if(a[j]<a[j+1])
	{

		cout<<mak;
		dolla=mak/a[j];
		cout<<dolla;
		j=0;
	}
}

	return 0;
}
