#pragma once
class CMergeSort
{
public:
    CMergeSort(void);
    ~CMergeSort(void);

    void Sort(int *r, int *rf, int lenght);

private:
    void Merge(int *r,int *rf, int i, int m, int n);
};

