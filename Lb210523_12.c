// Accept the string from user and it will count the number of small charactors from that string

#include<stdio.h>
int ChackSmall(char Str [])
{
    int iCount = 0 ;
    while(*Str != '\0')
    {
        if((*Str >= 'a')&&(*Str <='z'))
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
    
    iRet = ChackSmall(Arr); // StrlenX(100)

    printf("Length of string is : %d",iRet);
    
    return 0;
}
