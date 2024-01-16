//Accept charactor from user and chack wether the charactor is capital or not
#include<stdio.h>
#include<stdbool.h>

bool ChackCapital(char cValue)
{
    if((cValue >= 'A')&&(cValue <= 'Z'))
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

    printf("enter the charactor\n");
    scanf("%c",&Ch);
    
    bRet = ChackCapital(Ch);
    if(bRet == true)
    {
        printf("%c is a Capital latter \n",Ch);   
    }
    else
    {
        printf("%c is not a Capital latter \n",Ch);   
    }

    return 0;
}