//============================================================================
// Name        : xunhuanxiaoshu.cpp
// Author      : ju
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<map>
#include<stdio.h>
#include<string>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{

    char *ch;
    cin>>ch;
    map<string, int> mapSubstr;
    map <string, int>::iterator iter;

for(int i=0;i<1000;i++)
{
    for(int j=i;j<1000;j++)
    {
        string s(&ch[i],&ch[j]);
        mapSubstr[s]++;
    }
}



int count=0;
for(iter = mapSubstr.begin(); iter != mapSubstr.end(); iter++)
{

        int n=iter->second;
        if(n>count)
        {count=iter->second;}
    cout<<"key: "<<iter->first <<" value: "<<iter->second<<endl;
}
cout<<count;



return 0;
}
