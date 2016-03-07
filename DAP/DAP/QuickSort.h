// QuickSort.h : øÏÀŸ≈≈–Ú°£
//

class CQuickSort
{
public:
    CQuickSort();
    ~CQuickSort();

    void Sort(int a[], int low, int high);

private:
    void Swap(int *a, int *b);
    int Partition(int a[], int low, int high);
    void print(int a[], int n);
};
