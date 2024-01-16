// Accept the string from user and it will count the number of letter from the string

#include<stdio.h>
int StrlenX(char Str [])
{
    int iCount = 0 ;
    while(*Str != '\0')
    {
        iCount ++;
        Str ++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string name \n");
    scanf("%[^\n]s",Arr);
    
    iRet = StrlenX(Arr); // StrlenX(100)

    printf("Length of string is :yujk, %d",iRet);
    
    return 0;
}
