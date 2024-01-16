//Accept charactor from user and chack wether the charactor is Small or not
#include<stdio.h>
#include<stdbool.h>

bool ChackSmall(char cValue)
{
    if((cValue >= 'a')&&(cValue <= 'z'))
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
    
    bRet = ChackSmall(Ch);
    if(bRet == true)
    {
        printf("%c is a Small latter \n",Ch);   
    }
    else
    {
        printf("%c is not a Small latter \n",Ch);   
    }

    return 0;
}
