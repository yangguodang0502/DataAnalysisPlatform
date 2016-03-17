#pragma once
class CMakeAndDelete
{
public:
    CMakeAndDelete(void);
    ~CMakeAndDelete(void);

    int* Run(const int *InputArray, int count, int& OutPutCount, int MakeValue);
};

