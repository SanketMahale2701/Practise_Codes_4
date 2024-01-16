// Accept string from user and accept one another charactor and return the frist occurance of that charactor from the string
#include<stdio.h>

int FristOccurance(char *Str,char cValue)
{
    int iCnt = 1;
    int iPos = 0;
    while(*Str != '\0')
    {
      if(*Str == cValue)
      {
        iPos = iCnt ;
        break;
      }
      Str ++;
      iCnt ++;
    }
    return iPos;
}
int main()
{
    char Arr[30];
    char Ch = '\0';
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the charactor :\n");
    scanf(" %c",&Ch);
   
    iRet = FristOccurance(Arr,Ch);

    printf("Frist Occurance of thst charsctor is :%d\n",iRet);

    return 0;
}