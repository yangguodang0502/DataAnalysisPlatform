#pragma once
class CShellSort
{
public:
    CShellSort(void);
    ~CShellSort(void);

    void Sort(int a[], int n);

private:
    void InsertSort(int a[], int n, int dk);
};

