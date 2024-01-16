// Program 285
/*
    Q. Accept linklist from user which contains 5 node and return the perfect
       number from the singlylinklist
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
void Chackperfect(PNODE Head)
{
    int iNo = 0;
    int iSum = 0;
    int iCnt = 0;

    while(Head != NULL)
    {
        iNo = Head -> data;
        for(iCnt = 1;iCnt <= iNo/2;iCnt++ )
        {
           if((iNo % iCnt) == 0)
           {
             iSum = iSum + iCnt;
           }
        }

        if(iSum == iNo)
        {
             printf("%d\t",iNo);
        }
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
    
    InsertFrist(&frist,496);
    InsertFrist(&frist,101);
    InsertFrist(&frist,28);
    InsertFrist(&frist,6);
    InsertFrist(&frist,11);
    
    Display(frist);
  
    Chackperfect(frist);


    return 0;
}
