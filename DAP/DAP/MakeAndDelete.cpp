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
    int* Temp = new int[MakeValue];//����1~13���ֵĴ���  
      
    int nOutCount = 0;//ʣ��Ԫ�ظ���  
      
    int i;  
    int j;  
    int k;  
      
      
    memset(Temp, 0, MakeValue*sizeof(int));  
      
    //�ж�����������Ч�ԣ�ͬʱͳ��1~13���ֵĴ���  
    for (i=0; i<count; i++)  
    {  
        if (InputArray[i]>=MakeValue || InputArray[i]<1)  
        {  
            OutPutCount = -1;  
            return NULL;//��������ֲ���1~13��Χ��  
        }  
        Temp[InputArray[i]]++;  
    }  
      
    //�Ը������м���:ʣ�������Ϊ0,��Ϊ��ֵ��ͬʱͳ��ʣ��Ԫ�ظ���  
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
      
    //�����ż������2ȡ�ࡣ  
    if (MakeValue % 2 == 0)   
    {    
        Temp[MakeValue / 2] = Temp[MakeValue / 2] % 2;    
        nOutCount += Temp[MakeValue / 2];  
    }  
      
    //ʣ������Ϊ0  
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
