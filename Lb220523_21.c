// accept two string from the user and concact the contains of frist string at the end of the second string just concact the number of latter specified by the user
// Hello = Hel

#include <stdio.h>
//#include<strncat.h>

void StrNcatX(char *src, char *dest,int iLength) 
{
   // 1 : travel till end of dest 
   while (*dest != '\0')
   {
      dest ++;
   }
   
   // 2 : copy the data from src to dest
   while (*src != '\0')
    {

      *dest = *src ;
       dest ++;
       src ++; 
     
         iLength --;
         if (iLength == 0)
         {
            break;
         }

     }
      // 3 : write '\0' at the end of dest
      *dest = '\0';

}
int main()
{
    char Arr[30];
    char Brr[30] = "Demo";
    int iNo = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the number of letter that you want to concat :\n");
    scanf("%d",&iNo);

    StrNcatX(Arr, Brr, iNo);

    printf("string after copy is : %s\n", Brr);

    return 0;
}