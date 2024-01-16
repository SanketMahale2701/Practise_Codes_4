// Accept string from user and replace every white space from the string whith the _ (underscore)letter

#include<stdio.h>

void EditString(char *str)
{
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            *str = '_';
        }
        str++;
    }
    
}
int main()
{
    char Arr[30];

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);
   
    EditString(Arr);

    printf("Enter the string after editing is %s:\n",Arr);
   
    return 0;
}