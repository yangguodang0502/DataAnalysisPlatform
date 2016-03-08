#include "stdafx.h"
#include "QuickSort.h"

using namespace std;

CQuickSort::CQuickSort()
{

}

CQuickSort::~CQuickSort()
{

}

void CQuickSort::Swap(int *a, int *b)  
{  
    int tmp = *a;  
    *a = *b;  
    *b = tmp;  
}

int CQuickSort::Partition(int a[], int low, int high)  
{  
    int privotKey = a[low];                             //��׼Ԫ��  
    while(low < high){                                   //�ӱ�����˽�������м�ɨ��  
        while(low < high  && a[high] >= privotKey) --high;  //��high ��ָλ����ǰ���������ൽlow+1 λ�á����Ȼ�׼Ԫ��С�Ľ������Ͷ�  
        Swap(&a[low], &a[high]);  
        while(low < high  && a[low] <= privotKey ) ++low;  
        Swap(&a[low], &a[high]);  
    }  
    CCommon::Print(a,10);  
    return low;  
}  
  
  
void CQuickSort::Sort(int a[], int low, int high)
{  
    if(low < high){  
        int privotLoc = Partition(a,  low,  high);  //����һ��Ϊ��  
        Sort(a,  low,  privotLoc -1);          //�ݹ�Ե��ӱ�ݹ�����  
        Sort(a,   privotLoc + 1, high);        //�ݹ�Ը��ӱ�ݹ�����  
    }  
}  
