//Accept the Input from user and chack wether the input is Digit or not
#include<stdio.h>
#include<stdbool.h>

bool ChackDigit(char cValue)
{
    if((cValue >= '0')&&(cValue <= '9'))
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
    char Ch = '\0';
    bool bRet = false;

    printf("Enter the charactor\n");
    scanf("%c",&Ch);
    
    bRet = ChackDigit(Ch);
    if(bRet == true)
    {
        printf("%c is a Digit\n",Ch);   
    }
    else
    {
        printf("%c is not a Digit \n",Ch);   
    }

    return 0;
}
