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
        key = SelectMinKey(a, n,i);           //ѡ����С��Ԫ��  
        if(key != i)
        {  
            Swap(a, key, i); //��СԪ�����iλ��Ԫ�ػ���  
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
