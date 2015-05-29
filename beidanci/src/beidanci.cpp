//============================================================================
// Name        : beidanci.cpp
// Author      : judyge
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {

	int m;
	int q;
	cin>>m>>q;
	char *p;
	cin>>p;
	char *s[m];
	for(int i=0;i<m;i++)
	{
		cin>>s[i];
	}


while(q--)
{
int l,r;
cin>>l>>r;

   map<string, int> mapSubstr;
   map <string, int>::iterator iter;

for(int i=l;i<r;i++)
{
   for(int j=i;j<r;j++)
   {
       string subs(&p[i],&p[j]);
       mapSubstr[subs]++;
   }
}


for(iter = mapSubstr.begin(); iter != mapSubstr.end(); iter++)
{
	for(int i=0;i<m;i++)
	{

        if(iter->first==s[i])
        {cout<<iter->second;}
	}
}

}
	return 0;
}
