// Accept the string from user and chackwether string contains the latter in it or not 

#include<stdio.h>
#include<stdbool.h>

bool Chackchar(char Str [],char cValue)
{
    int iCount = 0 ;
    while(*Str != '\0')
    {
        if( *Str == cValue )
        {
            break;
        }
        Str ++;
    }
    if(*Str == cValue)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[20];
    char Ch ='\0';
    bool bRet = false;

    printf("Enter the string name \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the charactor \n");
    scanf(" %c",&Ch);
    
    bRet = Chackchar(Arr,Ch); // StrlenX(100)
 
    if(bRet == true)
    {
         printf(" %c is present in the string \n");
    }
    else
    {
         printf(" %c is not present in the string \n");
    }
    
    return 0;
}
