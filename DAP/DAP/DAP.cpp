// DAP.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "QuickSort.h"

using namespace std;

void print(int a[], int n){  
    for(int j= 0; j<n; j++){  
        cout<<a[j] <<"  ";  
    }  
    cout<<endl;  
}

int _tmain(int argc, _TCHAR* argv[])
{
    int a[10] = {3,1,5,7,2,4,9,6,10,8};  
    cout<<"��ʼֵ��";  
    print(a,10);  
    CQuickSort quickSort;
    quickSort.Sort(a,0,9);
    cout<<"�����";  
    print(a,10); 
    system("pause");

	return 0;
}

