// accept two strings from user and chack wether two strings same or not
// case insensetive
// input : str1 - Demo Hello    str2 - demo HeLLo
// Output : true

#include<stdio.h>
#include<stdbool.h>
bool stricmpX (char *str1,char *str2)
{
   while((*str1 != '\0')&&(*str2 != '\0'))
   {
     if (*str1 != *str2)
     {
         if ((*str1 >= 'a')&&(*str1 <= 'z'))
         {
            if(*str1 != (*str2 + 32))
            {
                break ;
            }
         }
         
         else if ((*str1 >= 'A')&&(*str1 <= 'Z'))
         {
            if(*str1 != (*str2 - 32))
            {
                break ;
            }
         }
         else
         {
            break ;
         }
     }
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

    bRet = stricmpX (Arr ,Brr);

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