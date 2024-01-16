//Accept string from user and count the small charactor and count the capital charactor

#include<stdio.h>
#define ERR_NOTFOUUNT -1
void Frequency(char *Str)
{
    int iSmall = 0;
    int iCapital = 0;
    while(*Str != '\0')
    {
      if((*Str >='a')&&(*Str <= 'z'))
      {
        iSmall++;
      }
      else if((*Str >='A')&&(*Str <= 'Z'))
      {
        iCapital++;
      }
      Str++;
    }
    printf("Number of small case charactor count %d\n",iSmall);
    printf("Number of Capital case charactor count %d\n",iCapital);
    
}
int main()
{
    char Arr[30];
    char Ch = '\0';
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);
   
    Frequency(Arr);
   
    return 0;
}