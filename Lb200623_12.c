// Program 280
/*
    Q. Accept linklist from user which contains 5 node and return the summation
       of all the elements from the singlylinklist
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
int Summation(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        iSum = iSum + (Head -> data);
        Head = Head -> next;
    }

    return iSum;
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
  
    iRet = Summation(frist);
    printf("Summation is : %d",iRet);


    return 0;
}
