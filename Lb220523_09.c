// Accept string from user and replace evey capital letter with the small letter

#include<stdio.h>
//  #include<strlwr.h>

void StrlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
    
}
int main()
{
    char Arr[30];

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);
   
    StrlwrX(Arr);

    printf("Enter the string after editing is %s:\n",Arr);
   
    return 0;
}