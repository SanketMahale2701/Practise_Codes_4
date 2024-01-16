// Accept the string from user and it will count the number of Vovels from that string

#include<stdio.h>
int CountVowels(char Str [])
{
    int iCount = 0 ;
    while(*Str != '\0')
    {
        if((*Str == 'a')||(*Str <='e')||(*Str == 'i')||(*Str <='o')||(*Str == 'u')||(*Str <='A')||(*Str == 'E')||(*Str <='I')||(*Str == 'O')||(*Str <='O'))
        {
            iCount ++ ;
        }
        Str ++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string name \n");
    scanf("%[^\n]s",Arr);
    
    iRet = CountVowels(Arr); // StrlenX(100)

    printf("Length of string is : %d",iRet);
    
    return 0;
}
