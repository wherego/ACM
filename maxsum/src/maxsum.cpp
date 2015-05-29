//============================================================================
// Name        : maxsum.cpp
// Author      : judyge
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/**
 * 动态规划:计算最大子段和
 * 算法描述:
 * 数组a 有n个元素, 记 s[i] 为从a【0】到a[i]中，包含a[i]的最大子段和
 * 则: s[i] 的值为:  s[i-1]>0时, s[i-1]+a[i]
 *                  否则 a[i]
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include<algorithm>
using namespace std;

static int maxn[100];   //中间最大值保存在数组
static int j=0;

int maxSub(int *a, int n,int v)
{
    int i=0, max=0, max_pos = 0;
    int si_1=0, si = 0;//分别记录s[i-1], 和 s[i]的值
    int *p = (int *)malloc(n*sizeof(int)); //p[i] 助于记录哪些单元被选择, p[i]=1 表示s[i]计算的结果中中使用了s[i-1]的值

    if (p==NULL)
        return -1;
    max = si_1 = a[0];
    p[0] = 0;
    for (i=1; i<n; i++){
        if (si_1<0){
            p[i] = 0;
            si = a[i];
        } else{
            p[i] = 1;
            si = si_1+a[i];
        }

        si_1 = si;

        if (si>max&&si<=v){   //小于等于背包V的保存在数组
            max = si;
            max_pos = i;
            maxn[j++]=max;
        }
    }

    //找到最大子段和的位置
    for (i=max_pos; i>=0; i--)
        if (p[i]==0)
            break;

    //即i..max_pos为最大子段和的元素
    printf("%d--%d:%d\n", i, max_pos, max);

    free(p);
    p = NULL;
    return max;
}

int main()
{
	int n;
	int v;
    cin>>v>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    }

    maxSub(a,n,v);
     sort(a,a+j);   //排列
     cout<<a[j];   //输出最大的  V的剩余最小
    return 0;
}
