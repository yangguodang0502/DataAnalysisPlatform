#include "stdafx.h"
#include "ShellSort.h"


CShellSort::CShellSort(void)
{
}


CShellSort::~CShellSort(void)
{
}

void CShellSort::Sort(int a[], int n)
{
    int dk = n/2;  
    while( dk >= 1  ){  
        InsertSort(a, n, dk);  
        dk = dk/2;  
    }  
}

void CShellSort::InsertSort(int a[], int n, int dk)
{
    for(int i= dk; i<n; ++i){  
        if(a[i] < a[i-dk]){          //����i��Ԫ�ش���i-1Ԫ�أ�ֱ�Ӳ��롣С�ڵĻ����ƶ����������  
            int j = i-dk;     
            int x = a[i];           //����Ϊ�ڱ������洢������Ԫ��  
            a[i] = a[i-dk];         //���Ⱥ���һ��Ԫ��  
            while(x < a[j]){     //�����������Ĳ���λ��  
                a[j+dk] = a[j];  
                j -= dk;             //Ԫ�غ���  
            }  
            a[j+dk] = x;            //���뵽��ȷλ��  
        }  
        CCommon::Print(a, n,i );  
    }  
}
