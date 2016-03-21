#pragma once
class CPatternMatching
{
public:
    CPatternMatching(void);
    ~CPatternMatching(void);

    int Index(string strMain, string strSub, int pos);
};

