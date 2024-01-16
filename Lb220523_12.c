// // Accept string from user and replace evey small letter with the capital letter and capital letter replace with the small letter

#include<stdio.h>
//  #include<strlwr.h>

void StrToggleX(char *str)
{
    int Gap = 'a'-'A';
    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            *str = *str - Gap;
        }
        else if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str = *str + Gap;
        }
        str++;
    }
    
}
int main()
{
    char Arr[30];

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);
   
    StrToggleX(Arr);

    printf("Enter the string after editing is %s:\n",Arr);
   
    return 0;
}