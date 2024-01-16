// Accept string from user and copy the string in Arr to Brr

#include<stdio.h>
//  #include<strlwr.h>

void StrCpyX(char *str,char *dest)        //   dest - destinstion src - source
{
    while(*str != '\0')
    {
        *dest = *str ;
         str++;
         dest ++;
    }

    *dest ='\0';
}
int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);
   
    StrCpyX(Arr,Brr);

    printf("string after copy is : %s:\n",Brr);
   
    return 0;
}