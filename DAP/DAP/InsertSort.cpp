#include "stdafx.h"
#include "InsertSort.h"


CInsertSort::CInsertSort(void)
{
}


CInsertSort::~CInsertSort(void)
{
}

void CInsertSort::Sort(int a[], int n)
{
    for(int i= 1; i<n; i++){  
        if(a[i] < a[i-1]){               //����i��Ԫ�ش���i-1Ԫ�أ�ֱ�Ӳ��롣С�ڵĻ����ƶ����������  
            int j= i-1;   
            int x = a[i];        //����Ϊ�ڱ������洢������Ԫ��  
            a[i] = a[i-1];           //�Ⱥ���һ��Ԫ��  
            while(x < a[j]){  //�����������Ĳ���λ��  
                a[j+1] = a[j];  
                j--;         //Ԫ�غ���  
            }  
            a[j+1] = x;      //���뵽��ȷλ��  
        }  
        CCommon::Print(a,n,i);           //��ӡÿ������Ľ��  
    }  

}
