#include "stdafx.h"
#include "PatternMatching.h"


CPatternMatching::CPatternMatching(void)
{
}


CPatternMatching::~CPatternMatching(void)
{
}

int CPatternMatching::Index(string strMain, string strSub, int pos)
{
    size_t i = pos;
    size_t j = 0;

    while (i < strMain.length() && j < strSub.length())
    {
        if (strMain[i] == strSub[j])
        {
            ++i;
            ++j;
        }
        else
        {
            i = i - j + 1;
            j = 0;
        }
    }

    if (j == strSub.length())
    {
        return i - j;
    }
    else
    {
        return 0;
    }
}
