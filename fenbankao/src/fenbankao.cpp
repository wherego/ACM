//============================================================================
// Name        : fenbankao.cpp
// Author      : ju
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

  int n;
  int m;
  int p;
  cin>>n>>m>>p;
  int count=0;
  int a[m];
  int b[p];
  for(int i=0;i<m;i++)
  {
  cin>>a[i];
  cout<<"\n";
  }
  for(int j=0;j<p;j++)
   {
   cin>>b[j];
   cout<<"\n";
   }
  for(int i=0;i<m;i++)
  {
	  for(int j=0;j<p;j++)
	  {
		  if(b[j]==a[i])
			  count++;
	  }

  }
	 cout<<n-(m+p-count);
	return 0;
}
