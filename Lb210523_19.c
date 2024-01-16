// Accept String from user and accept one more charactor from user and count number of that charactor occures in your stream
// Solutation 1
#include<stdio.h>

int CountChar(char *Str,char cValue)
{
    int iCount = 0 ;
    while(*Str != '\0')
    {
        if(*Str == cValue)
        {
            iCount++ ;
        }
        Str++ ;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    char Ch = '\0';
    int iRet = 0;

    printf("Enter the string name \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the charactor \n");
    scanf(" %c",&Ch);  //                   <-----------
    
    iRet = CountChar(Arr,Ch); // StrlenX(100)

    printf("Number of occurances are: %d",iRet);
    
    return 0;
}