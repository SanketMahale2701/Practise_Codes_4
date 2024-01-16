// accept two strings from user and reverse the string
// input : Hello 
// Output : olleH

// Program 200

#include<stdio.h>

void strRevX (char *str)
{
   char *iStart = NULL;
   char *iEnd = NULL ;
   char temp = '\0';

   iStart = str ;
   iEnd = str ;
   while( *iEnd != '\0')
   {
     iEnd++ ;
   }
   iEnd -- ;

   while(iStart < iEnd) // (100 < 104)
   {
      temp = *iStart ;
      *iStart = *iEnd ;
      *iEnd = temp ;

      iStart ++;
      iEnd -- ;
   }
}
int main()
{
    char Arr[30];

    printf("Enter the frist string :\n");
    scanf("%[^'\n']s",Arr);

    strRevX (Arr);

    printf("Reverse string is : %s\n",Arr);

    return 0;
}