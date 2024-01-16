// Program 281
/*
    Q. Accept linklist from user which contains 5 node and return the largest
    elements from the singlylinklist
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
int Maximum(PNODE Head)
{
    int iMax = Head -> data;

    while(Head != NULL)
    {
       if(Head -> data > iMax)
       {
         iMax = Head -> data;
       }
        Head = Head -> next;
    }

    return iMax;
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
  
    iRet = Maximum(frist);
    printf("Maximum number is : %d",iRet);


    return 0;
}
