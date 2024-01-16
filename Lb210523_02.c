// Q. Creation of ASCII table
#include<stdio.h>
int main()
{
    int iCnt = 0;

    for(iCnt= 0;iCnt <= 127;iCnt ++ )
    {
        printf("%c = %d\n",iCnt,iCnt);   
    }
    
    return 0;
}