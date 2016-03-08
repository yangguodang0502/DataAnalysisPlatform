#pragma once

#include<iostream>

using namespace std;

static class CCommon
{
public:
    static void Print(int a[], int n)
    {  
        for(int j= 0; j<n; j++)
        {  
            cout<<a[j] <<"  ";  
        }  
        cout<<endl;  
    }

    static void Print(int a[], int n ,int i)
    {  
        cout<<i <<":";  
        for(int j= 0; j<n; j++)
        {  
            cout<<a[j] <<" ";  
        }  
        cout<<endl;  
    }
};
