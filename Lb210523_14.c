// Accept the string from user and it will count the number of Digits from that string

#include<stdio.h>
int ChackDigits(char Str [])
{
    int iCount = 0 ;
    while(*Str != '\0')
    {
        if((*Str >= '0')&&(*Str <='9'))
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
    int iRet = 0;

    printf("Enter the string name \n");
    scanf("%[^\n]s",Arr);
    
    iRet = ChackDigits(Arr); // StrlenX(100)

    printf("Length of string is : %d",iRet);
    
    return 0;
}
