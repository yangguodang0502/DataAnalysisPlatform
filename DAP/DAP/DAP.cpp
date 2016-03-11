// DAP.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "QuickSort.h"
#include "InsertSort.h"
#include "ShellSort.h"
#include "SelectSort.h"
#include "HeapSort.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    // ��������
    cout << "��������" << endl; 
    int a[10] = {3,1,5,7,2,4,9,6,10,8};  
    cout<<"��ʼֵ��";  
    CCommon::Print(a,10);  
    CQuickSort quickSort;
    quickSort.Sort(a,0,9);
    cout<<"�����";  
    CCommon::Print(a,10); 

    // ֱ�Ӳ�������
    cout << "ֱ�Ӳ�������" << endl; 
    int a2[10] = {3,1,5,7,2,4,9,6,10,8};  
    CInsertSort insertSort;
    insertSort.Sort(a2, 10);
    CCommon::Print(a2,10,10); 

    // ϣ������
    cout << "ϣ������" << endl; 
    int a3[10] = {3,1,5,7,2,4,9,6,10,8};  
    CShellSort shellSort;
    shellSort.Sort(a3, 10);
    CCommon::Print(a3,10,10); 

    // ��ѡ������
    cout << "��ѡ������" << endl; 
    int a4[10] = {3,1,5,7,2,4,9,6,10,8};  
    CSelectSort selectlSort;
    selectlSort.Sort(a4, 10);
    CCommon::Print(a4,10,10);

    // ������
    cout << "������" << endl; 
    int a5[10] = {3,1,5,7,2,4,9,6,10,8};  
    CHeapSort heapSort;
    heapSort.Sort(a5, 10);
    CCommon::Print(a5,10);

    system("pause");

	return 0;
}

