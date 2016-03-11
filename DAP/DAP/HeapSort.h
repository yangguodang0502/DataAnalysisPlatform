#pragma once
class CHeapSort
{
public:
    CHeapSort(void);
    ~CHeapSort(void);

    void Sort(int H[],int length);

private:
    void HeapAdjust(int H[],int s, int length);
    void BuildingHeap(int H[], int length);
};

