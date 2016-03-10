#pragma once
class CSelectSort
{
public:
    CSelectSort(void);
    ~CSelectSort(void);

    void Sort(int a[], int n);

private:
    void Swap(int a[], int m, int n);
    int SelectMinKey(int a[], int n, int i);
};

