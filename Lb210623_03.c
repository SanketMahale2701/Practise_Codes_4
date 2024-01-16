// Program 288
//  Insert Last node in circular linklistt

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE,*PNODE,**PPNODE;

void InsertFrist(PPNODE Head,PPNODE Tail,int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

  if((*Head == NULL)&&(*Head == NULL))   // LL is empty
  {
     *Head = newn ;
     *Tail = newn ;    // #
  }
  else                                  // LL contains atleast one node
  {
    newn -> next = *Head;
    *Head = newn;
  }
   (*Tail) -> next = *Head;     // #
}
void InsertLast(PPNODE Head,PPNODE Tail,int iNo)
{
   
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;
  if((*Head == NULL)&&(*Head == NULL))   // LL is empty
  {
     *Head = newn ;
     *Tail = newn ;    // #
  }
  else                                  // LL contains atleast one node
  {
    (*Tail) -> next = newn;
    *Tail = (*Tail) -> next;  // *Tail = newn; 
  }
  (*Tail)-> next = *Head;
}
void InsertAtPos(PPNODE Head,PPNODE Tail,int iNo,int iPos)
{

}
void DeleteFrist(PPNODE Head,PPNODE Tail)
{

}
void DeleteLast(PPNODE Head,PPNODE Tail)
{

}
void DeleteAtPos(PPNODE Head,PPNODE Tail,int iPos)
{
    
}
void Display(PNODE Head,PNODE Tail)
{

}
int Count(PNODE Head,PNODE Tail)
{
 
}
int main()
{
    PNODE frist = NULL;
    PNODE last = NULL;    //#
    int iRet = 0;

    InsertFrist(&frist,&last,101);
    InsertFrist(&frist,&last,51);
    InsertFrist(&frist,&last,21);
    InsertFrist(&frist,&last,11);

    InsertLast(&frist,&last,111);
    InsertLast(&frist,&last,121);


    return 0;
}