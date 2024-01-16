// accept two strings from user and chack wether two strings same or not
#include<stdio.h>
#include<stdbool.h>
bool StrcmpX (char *str1,char *str2)
{
   while((*str1 != '\0')&&(*str2 != '\0')&&(*str1 == *str2))
   {
     str1++;
     str2++;
   }  
   if((*str1 == '\0')&&(*str2 == '\0'))
   {
     return true;
   }
   else
   {
    return false ;
   }
}
int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet = false;

    printf("Enter the frist string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the second string :\n");
    scanf(" %[^'\n']s",Brr);

    bRet = StrcmpX (Arr ,Brr);

    if(bRet == true)
    {
        printf("both the string are identical \n");  
    } 
    else
    {
        printf("Both the strings are different \n");
    }

    return 0;
}