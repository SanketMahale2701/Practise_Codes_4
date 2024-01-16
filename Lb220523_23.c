// Accept string from user and copy the string in Arr to Brr

#include<stdio.h>
//  #include<strlwr.h>

void StrNcpyX(char *str,char *dest,int iLenth)        //   dest - destinstion src - source
{
    while((*str != '\0')&&(iLenth != 0))
    {
        *dest = *str ;
         str++;
         dest ++;
         iLenth --;
    }

    *dest ='\0';
}
int main()
{
    char Arr[30];
    char Brr[30] ;
    int iNo  =0 ;
    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

     printf("Enter the number of charactor that you want to copy :\n");
    scanf("%d",&iNo);
   
    StrNcpyX(Arr,Brr,iNo);

    printf("string after copy is : %s:\n",Brr);
   
    return 0;
}