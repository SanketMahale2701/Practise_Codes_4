// Program 284
/*
    Q. Accept linklist from user which contains 5 node and return the summation
       of digits from the singlylinklist
*/ 
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
   int data;
   struct Node *next;

}NODE,* PNODE,** PPNODE;

void InsertFrist(PPNODE Head,int No)
{
   PNODE newn = NULL;
   newn = (PNODE)malloc(sizeof(NODE)); 

   newn -> data = No;
   newn -> next = NULL;       
   if(*Head == NULL)
   {
      *Head = newn ;
   }
   else 
   {
      newn -> next = *Head ;
      *Head = newn;
   }
}
void Sumdigits(PNODE Head)
{
    int iNo = 0;
    int iSum = 0;
    int iDigit = 0;

    while(Head != NULL)
    {
        iNo = Head -> data;
        while(iNo != 0)
        {
           iDigit = iNo % 10;
           iSum = iSum + iDigit;
           iNo = iNo / 10;
        }
        printf("%d\t",iSum);

        iSum = 0;
        Head = Head -> next;
    }

}

void Display(PNODE Head)
{
    printf("Element of linklist are \n");
    while(Head != NULL)
    {
        printf("|%d|->",Head -> data);
        Head = Head -> next;
    }
    printf("NULL\n");
}
int main()
{
    PNODE frist = NULL;
    int iRet = 0;
    
    InsertFrist(&frist,111);
    InsertFrist(&frist,101);
    InsertFrist(&frist,51);
    InsertFrist(&frist,21);
    InsertFrist(&frist,11);
    
    Display(frist);
  
    Sumdigits(frist);


    return 0;
}
