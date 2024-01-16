// Accept the string from user and it will count the number of White spaces from that string

#include<stdio.h>
int ChackWhiteSpaces(char Str [])
{
    int iCount = 0 ;
    while(*Str != '\0')
    {
        if((*Str ==' '))
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
    
    iRet = ChackWhiteSpaces(Arr); // StrlenX(100)

    printf("Length of string is : %d",iRet);
    
    return 0;
}
