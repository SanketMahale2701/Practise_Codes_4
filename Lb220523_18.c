// Accept string from user and copy the string in reverse order 
//input :- H e l l o  output :- 0 l l e H \0

#include <stdio.h>
//  #include<strlwr.h>

void StrCpyRevX(char *src, char *dest) 
{
   int iLength = 0;
   
   while(*src != '\0')
   {
      src ++;
      iLength ++;
   }
     src --;

   for(;iLength != 0;iLength --)
   {
        *dest = *src ;
        src --;
        dest++; 
       
   }
   *dest = '\0';
}
int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    StrCpyRevX(Arr, Brr);

    printf("string after copy is : %s:\n", Brr);

    return 0;
}