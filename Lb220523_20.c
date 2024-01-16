// accept two string from the user and you have to upand the frist string at the end of the secong string

#include <stdio.h>
//#include<strcat.h>

void StrCatX(char *src, char *dest) 
{
   while(*dest != '\0')
   {
      dest ++;
   }

   *dest = ' ';  // ------
   dest++;       // ------
   
   while(*src != '\0')
   {
     *dest = *src;
      src ++;
      dest ++;
   }
    
   *dest = '\0';

}
int main()
{
    char Arr[30];
    char Brr[30] = "Demo";

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    StrCatX(Arr, Brr);

    printf("string after copy is : %s:\n", Brr);

    return 0;
}