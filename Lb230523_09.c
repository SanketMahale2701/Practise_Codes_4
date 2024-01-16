// accept strings from user and chack wether string is palindrom or not
// input : ABCBA     input : AGCBA
// Output : true     Output : false

// Program 202cc

#include<stdio.h>
#include<stdbool.h>

bool ChkPalindrome (char *str)
{
   char *iStart = NULL;
   char *iEnd = NULL ;
   
   iStart = str ;
   iEnd = str ;

   while( *iEnd != '\0')
   {
     iEnd++ ;
   }
   iEnd -- ;

   while(iStart < iEnd) // (100 < 104)
   {
      if(*iStart != *iEnd)
      {
        break;
      }
      iStart ++;
      iEnd -- ;
   }
   if (iStart < iEnd)
   {
     return false ;
   }
   else
   {
    return true ;
   }
}     
int main()
{
    char Arr[30];
    bool bRet = false ;

    printf("Enter the frist string :\n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkPalindrome (Arr);
    
    if(bRet == true)
    {
        printf("String is palindrome \n");
    }
    else
    {
        printf("String is not palindrome \n");
    }

    return 0;
}