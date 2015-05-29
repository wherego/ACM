//============================================================================
// Name        : sumint.cpp
// Author      : judyge
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int k;
	cin>>k;
	int n[k];
	int i=0;
	while(k--)
	{
		cin>>n[i++];
	}

	int a=0;
	int b=0;
	int c=0;
for(int j=0;j<i;j++)
{
switch(n[j])
{
case 1:a++;
case 5:b++;
case 10:c++;
}

}
cout<<a<<"\n"<<b<<"\n"<<c<<endl;

	return 0;
}
