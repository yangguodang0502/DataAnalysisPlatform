#include "stdafx.h"
#include "MakeAndDelete.h"


CMakeAndDelete::CMakeAndDelete(void)
{
}


CMakeAndDelete::~CMakeAndDelete(void)
{
}

int* CMakeAndDelete::Run(const int *InputArray, int count, int& OutPutCount, int MakeValue)
{
    int* Temp = new int[MakeValue];//保存1~13出现的次数  
      
    int nOutCount = 0;//剩余元素个数  
      
    int i;  
    int j;  
    int k;  
      
      
    memset(Temp, 0, MakeValue*sizeof(int));  
      
    //判断输入数字有效性，同时统计1~13出现的次数  
    for (i=0; i<count; i++)  
    {  
        if (InputArray[i]>=MakeValue || InputArray[i]<1)  
        {  
            OutPutCount = -1;  
            return NULL;//输入的数字不在1~13范围里  
        }  
        Temp[InputArray[i]]++;  
    }  
      
    //对个数进行计算:剩余个数或为0,或为差值，同时统计剩余元素个数  
    for (i = 1; i < MakeValue / 2; i++)   
    {    
        if (Temp[i] > Temp[MakeValue - i])   
        {    
            Temp[i] -= Temp[MakeValue - i];    
            Temp[MakeValue - i] = 0;  
              
            nOutCount += Temp[i];  
        }   
        else   
        {  
            Temp[MakeValue - i] -= Temp[i];  
            Temp[i] = 0;    
              
            nOutCount += Temp[MakeValue - i];  
        }    
    }  
      
    //如果是偶数，对2取余。  
    if (MakeValue % 2 == 0)   
    {    
        Temp[MakeValue / 2] = Temp[MakeValue / 2] % 2;    
        nOutCount += Temp[MakeValue / 2];  
    }  
      
    //剩余数不为0  
    if (nOutCount > 0)  
    {  
        k =0;  
        OutPutCount = nOutCount;  
          
        int* OutPutArray = new int[nOutCount];  
        for (i= 1; i<MakeValue; i++)  
        {  
            if (Temp[i]>0)  
            {  
                for (j=0; j<Temp[i]; j++)  
                {  
                    OutPutArray[k++] = i;  
                }  
            }  
        }  
          
        return OutPutArray;  
    }  
      
    OutPutCount = 0;  
    return NULL; 
}
