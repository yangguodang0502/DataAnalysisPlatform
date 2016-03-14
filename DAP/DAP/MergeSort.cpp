#include "stdafx.h"
#include "MergeSort.h"


CMergeSort::CMergeSort(void)
{
}


CMergeSort::~CMergeSort(void)
{
}

void CMergeSort::Sort(int *r, int *rf, int lenght)  
{   
    int len = 1;  
    int *q = r ;  
    int *tmp ;  
    while(len < lenght) {  
        int s = len;  
        len = 2 * s ;  
        int i = 0;  
        while(i+ len <lenght){  
            Merge(q, rf,  i, i+ s-1, i+ len-1 ); //�Եȳ��������ӱ�ϲ�  
            i = i+ len;  
        }  
        if(i + s < lenght){  
            Merge(q, rf,  i, i+ s -1, lenght -1); //�Բ��ȳ��������ӱ�ϲ�  
        }  
        tmp = q; q = rf; rf = tmp; //����q,rf���Ա�֤��һ�˹鲢ʱ���Դ�q �鲢��rf  
    }  
}

//��r[i��m]��r[m +1 ��n]�鲢����������rf[i��n]  
void CMergeSort::Merge(int *r,int *rf, int i, int m, int n)  
{  
    int j,k;  
    for(j=m+1,k=i; i<=m && j <=n ; ++k){  
        if(r[j] < r[i]) rf[k] = r[j++];  
        else rf[k] = r[i++];  
    }  
    while(i <= m)  rf[k++] = r[i++];  
    while(j <= n)  rf[k++] = r[j++];  
    CCommon::Print(rf,n+1);  
}
