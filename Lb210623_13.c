//Program 299
// Display function for Doubly circular linklist

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
    if((Head != NULL)&&(Tail != NULL))
    {
        do
        {
          printf("| %d | <==> ",Head -> data);
          Head = Head -> next;
        } while (Head != Tail -> next);
       printf("\n");   
    }
    else
    {
        printf("Linklist is Enpty \n");
    }
}
int Count(PNODE Head,PNODE Tail)
{
    
}
int main()
{
    PNODE frist = NULL;
    PNODE Last = NULL;

    InsertFrist(&frist,&Last,51);
    InsertFrist(&frist,&Last,21);
    InsertFrist(&frist,&Last,11);
    
    Display(frist,Last);

    InsertLast(&frist,&Last,101);
    InsertLast(&frist,&Last,111);
    InsertLast(&frist,&Last,121);

    Display(frist,Last);

    return 0;
}