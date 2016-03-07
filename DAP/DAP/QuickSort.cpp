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

void CQuickSort::print(int a[], int n)
{  
    for(int j= 0; j<n; j++){  
        cout<<a[j] <<"  ";  
    }  
    cout<<endl;  
}

int CQuickSort::Partition(int a[], int low, int high)  
{  
    int privotKey = a[low];                             //基准元素  
    while(low < high){                                   //从表的两端交替地向中间扫描  
        while(low < high  && a[high] >= privotKey) --high;  //从high 所指位置向前搜索，至多到low+1 位置。将比基准元素小的交换到低端  
        Swap(&a[low], &a[high]);  
        while(low < high  && a[low] <= privotKey ) ++low;  
        Swap(&a[low], &a[high]);  
    }  
    print(a,10);  
    return low;  
}  
  
  
void CQuickSort::Sort(int a[], int low, int high)
{  
    if(low < high){  
        int privotLoc = Partition(a,  low,  high);  //将表一分为二  
        Sort(a,  low,  privotLoc -1);          //递归对低子表递归排序  
        Sort(a,   privotLoc + 1, high);        //递归对高子表递归排序  
    }  
}  
