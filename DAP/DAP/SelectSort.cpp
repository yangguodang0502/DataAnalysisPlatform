#include "stdafx.h"
#include "SelectSort.h"


CSelectSort::CSelectSort(void)
{
}


CSelectSort::~CSelectSort(void)
{
}

void CSelectSort::Sort(int a[], int n)
{
    int key;  
    for(int i = 0; i< n; ++i) 
    {  
        key = SelectMinKey(a, n,i);           //选择最小的元素  
        if(key != i)
        {  
            Swap(a, key, i); //最小元素与第i位置元素互换  
        }  
        CCommon::Print(a,  n , i);  
    }  
}

void CSelectSort::Swap(int a[], int m, int n)
{
    int tmp = a[m];
    a[m] = a[n];
    a[n] = tmp;
}

int CSelectSort::SelectMinKey(int a[], int n, int i)
{
    int k = i;  
    for(int j=i+1 ;j< n; ++j)
    {  
        if(a[k] > a[j]) 
        {
            k = j;
        }
    }  
    return k;
}
