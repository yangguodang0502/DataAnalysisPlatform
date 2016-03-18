// DAP.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "QuickSort.h"
#include "InsertSort.h"
#include "ShellSort.h"
#include "SelectSort.h"
#include "HeapSort.h"
#include "BubbleSort.h"
#include "MergeSort.h"
#include "MakeAndDelete.h"
#include "Fibonacci.h"

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

    // ð������
    cout << "ð������" << endl; 
    int a6[10] = {3,1,5,7,2,4,9,6,10,8};  
    CBubbleSort bubbleSort;
    bubbleSort.Sort(a6, 10);
    CCommon::Print(a6,10);

    // �鲢����
    cout << "�鲢����" << endl; 
    int a7[10] = {3,1,5,7,2,4,9,6,10,8};  
    int b[10];
    CMergeSort mergeSort;
    mergeSort.Sort(a7, b, 10);
    CCommon::Print(b, 10);
    CCommon::Print(a7, 10);

    // ��14
    cout << "��14��" << endl; 
    int a8[6] = {9,1,9,7,5,13};
    CMakeAndDelete makeAndDelete;
    int nOutCount;
    int* outArray = makeAndDelete.Run(a8, 6, nOutCount, 14);
    CCommon::Print(outArray, nOutCount);

    // 쳲�������
    cout << "쳲�������" << endl;
    CFibonacci fibonacci;
    int nFib = fibonacci.Run(1, 2, 5);
    cout << nFib << endl;

    system("pause");

	return 0;
}

