//Program 298
// Insert last Node for Doubly circular linklist
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE,*PNODE,**PPNODE;
void InsertFrist(PPNODE Head,PPNODE Tail,int iNo)
{
   PNODE newn = NULL;

   newn =(PNODE)malloc(sizeof(NODE));

   newn -> data = iNo;
   newn -> next = NULL;
   newn -> prev = NULL;

   if((*Head == NULL)&&(*Tail ==NULL))
   {
      *Head = newn;
      *Tail = newn;
   }
   else
   {
      newn -> next = *Head;
      (*Head) -> prev = newn;
      *Head = newn;

   }
   (*Tail) -> next = *Head;
   (*Head) -> prev = *Tail;
}
void InsertLast(PPNODE Head,PPNODE Tail,int iNo)
{
     PNODE newn = NULL;

   newn =(PNODE)malloc(sizeof(NODE));

   newn -> data = iNo;
   newn -> next = NULL;
   newn -> prev = NULL;

   if((*Head == NULL)&&(*Tail ==NULL))
   {
      *Head = newn;
      *Tail = newn;
   }
   else
   {
     (*Tail) -> next = newn;
      newn -> prev = *Tail;
      *Tail = newn; // *Tail = *Tail -> next;
   }
   (*Tail) -> next = *Head;
   (*Head) -> prev = *Tail;
}
void InsertAtPos(PPNODE Head,PPNODE Tail,int iNo,int iPos)
{
    
}
void DeteleFrist(PPNODE Head,PPNODE Tail)
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
    return 0;
}
int main()
{
    PNODE frist = NULL;
    PNODE Last = NULL;
    return 0;
}