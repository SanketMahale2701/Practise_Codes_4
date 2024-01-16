// Accept String from user and count number of charactors occures in your stream
// Problem 

#include<stdio.h>

int CountChar(char Str[],char cValue)
{
    int iCount = 0 ;

    while(*Str != '\0')
    {
        if((*Str == cValue))
        {
            iCount ++ ;
        }
        Str ++;
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
    scanf("%c",&Ch);
    
    iRet = CountChar(Arr,Ch); // StrlenX(100)

    printf("Count of %c is : %d",Ch,iRet);
    
    return 0;
}