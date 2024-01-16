// Program 273
// Insert Count function with doubly linklist

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
   int data;
   struct Node *next;
   struct Node *prev;     //#
    
}NODE,*PNODE,**PPNODE;
void InsertFrist(PPNODE Head,int iNo)
{
   PNODE newn = NULL;
   newn =(PNODE)malloc(sizeof(NODE));

   newn -> data = iNo;
   newn -> next = NULL;
   newn -> prev = NULL;         //#
   if(*Head == NULL)       // LL is emp ty
   {
     *Head = newn;
   }
   else                    // LL contains atleast one node in it
   {
     (*Head) -> prev = newn;     //#
      newn -> next = *Head;
      *Head = newn;
   }

}
void InsertLast(PPNODE Head,int iNo)
{
    PNODE newn = NULL;
   newn =(PNODE)malloc(sizeof(NODE));

   newn -> data = iNo;
   newn -> next = NULL;
   newn -> prev = NULL;
   if(*Head == NULL)       // LL is empty
   {
     *Head = newn;
   }
   else                    // LL contains atleast one node in it
   {
    
   }

}
void InsertAtPos(PPNODE Head,int iNo,int iPos)
{
    
}
void DeleteFrist(PPNODE Head,int iNo)
{

}
void DeleteLast(PPNODE Head,int iNo)
{
    
}
void DeleteAtPos(PPNODE Head,int iNo,int iPos)
{
    
}
void Display(PNODE Head)        // same like singlynlinklist
{
    printf("Elements of linklist are :\n");
    printf("NULL<=>");
    while(Head != NULL)
    {
      printf("| %d |<=>",Head -> data);
      Head = Head -> next ;
    }
     printf("NULL");
}
int Count(PNODE Head)
{
    int iCount = 0;
     while(Head != NULL)
     {
       iCount++;
       Head = Head -> next ;
     }
    return iCount;
}
int main()
{
    PNODE frist = NULL;
    int iRet = 0;

    InsertFrist(&frist,101);
    InsertFrist(&frist,51);
    InsertFrist(&frist,21);
    InsertFrist(&frist,11);

    iRet = Count(frist);
    Display(frist);

    return 0;
}