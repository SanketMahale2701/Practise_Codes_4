// Accept the string from user and it will count the number of capital charactors from that string

#include<stdio.h>
int ChackCapital(char Str [])
{
    int iCount = 0 ;
    while(*Str != '\0')
    {
        if((*Str >= 'A')&&(*Str <='Z'))
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
    
    iRet = ChackCapital(Arr); // StrlenX(100)

    printf("Length of string is : %d",iRet);
    
    return 0;
}
