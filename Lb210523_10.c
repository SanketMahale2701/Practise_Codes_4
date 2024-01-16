// Accept the string from user and it will count the number of letter from the string

#include<stdio.h>
StrlenX(char Str [])
{
    
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string name \n");
    scanf("%[^\n]s",Arr);
    
    iRet = StrlenX(Arr); // StrlenX(100)

    printf("Length of string is %d",iRet);
    
    return 0;
}
