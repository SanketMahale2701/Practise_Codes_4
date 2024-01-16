// Accept string from user and copy only the Capital charactors from src to dest 

#include<stdio.h>
//  #include<strlwr.h>

void StrCpyCapX(char *str,char *dest)        //   dest - destinstion src - source
{
    while(*str != '\0')
    {
        if((*str >='A')&&(*str<= 'Z'))
        {
            *dest = *str ;
             dest ++;
        }
        str++;
    }

    *dest ='\0';
}
int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);
   
    StrCpyCapX(Arr,Brr);

    printf("string after copy is : %s:\n",Brr);
   
    return 0;
}