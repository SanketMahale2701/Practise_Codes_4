// Accept string from user and copy the string after toggling (Capital to small and small to capital) from src to dest

#include <stdio.h>
//  #include<strlwr.h>

void StrCpyToggleX(char *str, char *dest) //   dest - destinstion src - source
{
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *dest = *str - 32;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            *dest = *str + 32;   
        }
        else
        {
            *dest = *str ;
        }
          str++;
          dest++;
    }

    *dest = '\0';
}
int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    StrCpyToggleX(Arr, Brr);

    printf("string after copy is : %s:\n", Brr);

    return 0;
}