//Program 302
// Delete last Node for Doubly circular linklist

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
void DeleteFrist(PPNODE Head,PPNODE Tail)
{
   if((*Head == NULL)&&(*Tail == NULL))
   {
     return ;
   }
   else if(*Head == *Tail)
   {
     free(*Head);
     *Head = NULL;
     *Tail = NULL;
   }
   else
   {
      *Head = (*Head) -> next;
      free((*Tail) -> next);
      (*Tail) -> next = *Head;
      (*Head) -> prev = *Tail;
   }
}
void DeleteLast(PPNODE Head,PPNODE Tail)
{
    if((*Head == NULL)&&(*Tail == NULL))
    {
      return ;
    }
    else if(*Head == *Tail)
    {
      free(*Head);
      *Head = NULL;
      *Tail = NULL;
   }
   else
   {
     *Tail = (*Tail) -> prev;
     free((*Tail) -> next);  //(*Head -> prev);
     (*Tail) -> next = *Head;
     (*Head)-> prev = *Tail;

   }
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
    int iCount = 0;
     if((Head != NULL)&&(Tail != NULL))
    {
        do
        {
          iCount ++;
          Head = Head -> next;
        } while (Head != Tail -> next);
        return iCount;
    }
    else
    {
       return 0;
    }
}
int main()
{
    PNODE frist = NULL;
    PNODE Last = NULL;
    int iRet = 0;

    InsertFrist(&frist,&Last,51);
    InsertFrist(&frist,&Last,21);
    InsertFrist(&frist,&Last,11);
    
    Display(frist,Last);
    iRet = Count(frist,Last);
    printf("(InsertFrist) Number of Nodes are : %d \n",iRet);

    InsertLast(&frist,&Last,101);
    InsertLast(&frist,&Last,111);
    InsertLast(&frist,&Last,121);

    Display(frist,Last);
     iRet = Count(frist,Last);
    printf("(InsertLast) Number of Nodes are : %d \n",iRet);

    DeleteFrist(&frist,&Last);

    Display(frist,Last);
     iRet = Count(frist,Last);
    printf("(DeleteFrist) Number of Nodes are : %d \n",iRet);
    
    DeleteLast(&frist,&Last);

    Display(frist,Last);
     iRet = Count(frist,Last);
    printf("(DeleteLast) Number of Nodes are : %d \n",iRet);


    return 0;
}