// DAP.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "QuickSort.h"
#include "InsertSort.h"
#include "ShellSort.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    // 快速排序
    int a[10] = {3,1,5,7,2,4,9,6,10,8};  
    cout<<"初始值：";  
    CCommon::Print(a,10);  
    CQuickSort quickSort;
    quickSort.Sort(a,0,9);
    cout<<"结果：";  
    CCommon::Print(a,10); 

    // 直接插入排序
    int a2[10] = {3,1,5,7,2,4,9,6,10,8};  
    CInsertSort insertSort;
    insertSort.Sort(a2, 10);
    CCommon::Print(a2,10,10); 

    // 希尔排序
    int a3[10] = {3,1,5,7,2,4,9,6,10,8};  
    CShellSort shellSort;
    shellSort.Sort(a3, 10);
    CCommon::Print(a3,10,10); 

    system("pause");

	return 0;
}

