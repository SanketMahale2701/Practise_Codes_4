// accept two string from the user and you have to upand the frist string at the end of the secong string

#include <stdio.h>
//#include<strcat.h>

// 1 : travel till end of dest
// 2 : copy the data from src to dest
// 3 : write '\0' at the end of dest

void StrCatX(char *src, char *dest) 
{
   // 1 : travel till end of dest
   while(*dest != '\0')
   {
      dest ++;
   }

   // 2 : copy the data from src to dest
   while(*src != '\0')
   {
     *dest = *src;
      src ++;
      dest ++;
   }
    
   // 3 : write '\0' at the end of dest 
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