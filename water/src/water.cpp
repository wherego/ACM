//============================================================================
// Name        : water.cpp
// Author      : ju
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int h;
	int n;
	int x;
	int t0;
	cin>>h>>n>>x>>t0;
	if(n>=x)
		cout<<"-1";
	if(h/(x-n)>=t0)
	{
		cout<<"save";
	    cout<<h/(x-n);
	}

	if(h/(x-n)<t0)
	{
		cout<<"Dangerous! Be careful!";
		cout<<h/(x-n);
	}


	return 0;
}
