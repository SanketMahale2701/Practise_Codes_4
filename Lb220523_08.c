// Accept string from user and replace evey Small letter replace with the $ and capital letter replace with the *

#include<stdio.h>

void EditString(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str = '*';
        }
        else if((*str >= 'a')&&(*str <= 'z'))
        {
            *str = '$';
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