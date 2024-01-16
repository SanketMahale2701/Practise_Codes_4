// // Accept string from user and replace evey small letter with the capital letter

#include<stdio.h>
//  #include<strlwr.h>

void StrlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            *str = *str - 32;
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