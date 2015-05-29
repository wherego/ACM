//============================================================================
// Name        : zhongshu.cpp
// Author      : ju
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
	#include<cstdio>
	#include<cstring>
	#include<algorithm>
	#include<ctime>
	#include<cmath>
	#include<string>
    #define N 12350
	#define MAX 12345
	#define MAXSUM 12500000
	#define CLR(arr, what) memset(arr, what, sizeof(arr))
	using namespace std;

	int countmax;

	template<class T>
	class Hash
	{
	private:
	    int Key[N], Head[N], Next[N], Same[N];
	    int top;
	public:
	    int search( int x);
	    void push(int x);
	    bool pre(int x);
	    void clear();
	};

	template<class T>
	inline void Hash<T>::clear()
	{
	    top = 0;
	    CLR(Head, -1);
	    CLR(Next, -1);
	    CLR(Same, 0);
	}

	template<class T>
	inline bool Hash<T>::pre(int x)
	{
	    int temp;
	    temp = abs(x) % MAX;
	    for(int i = Head[temp]; i != -1; i = Next[i]) //记录重复
	    {
	        if(x == Key[i])
	        {
	            Same[i]++;
	            return true;
	        }
	    }
	    return false;
	}

	template<class T>
	inline void Hash<T>::push(int x)
	{
	    if(pre(x) == true) //出现过,Same记录
	        return ;
	    else //没出现过
	    {
	        int temp;
	        temp = abs(x) % MAX;
	        Key[top] = x;
	        Next[top] = Head[temp];
	        Head[temp] = top;
	        Same[top] = 1;
	        top++;
	    }
	}


	template<class T>
	inline int Hash<T>::search(int x)
	{
	    int temp;
	    temp = abs(x) % MAX;
	    for(int i = Head[temp]; i != -1; i = Next[i])
	    {
	        if(x == Key[i])
	        {
	        	if(Same[i]>countmax)
	        	{
                      countmax=Same[i];
//遍历same 找最大的same
	        	}
	        }
	    }

	    return countmax; // 返回最大same
	}


	int main()
	{
	      int m[100005];
	      Hash<int> h;
	      h.clear();
	      int n;
	       cin>>n;
	    for(int i=0;i<n;i++)
	   {
	    int j;
	    cin>>j;
	     m[i]=j;
	    h.push(j);
	    }
	    //建表
	    for(int i=0;i<n;i++)
	   	   {
	   	  h.search(m[i]);
	   	    }
cout<<countmax;   //输出最大same

	return 0;
	}

