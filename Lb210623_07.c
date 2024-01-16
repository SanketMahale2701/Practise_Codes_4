// Program 292
// Delete Last node in circular linklist

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
  if((*Head == NULL)&&(*Tail == NULL))
  {
     return;
  }

  else if (*Head == *Tail)
  {
    free(*Head);
    *Head = NULL;
    *Tail = NULL;
  }
  else
  {
    *Head = (*Head) -> next;
    free((*Tail) -> next);
    (*Tail)-> next = *Head;
  }
  
}
void DeleteLast(PPNODE Head,PPNODE Tail)
{
   PNODE Temp = *Head;

  if((*Head == NULL)&&(*Tail == NULL))
  {
     return;
  }

  else if (*Head == *Tail)
  {
    free(*Head);
    *Head = NULL;
    *Tail = NULL;
  }
  else
  {
     while(Temp -> next != *Tail)  
     {
        Temp = Temp -> next;
     } 
     free(*Tail);
     *Tail = Temp;

     (*Tail) -> next = *Head; 
  }
}
void DeleteAtPos(PPNODE Head,PPNODE Tail,int iPos)
{
    
}
void Display(PNODE Head,PNODE Tail)
{
  if((Head != NULL)&&(Head != NULL))   // LL is empty
  {
     do
    {
      printf("|%d|->",Head -> data);
      Head = Head -> next;
    }while(Head != Tail -> next);  
  }
  else
  {
    printf("Linklist is empty\n");
  }
  printf("\n");
}
int Count(PNODE Head,PNODE Tail)
{
  int iCount = 0;

  if((Head != NULL)&&(Head != NULL))   // LL is empty
  {
     do
     {
       iCount ++;
       Head = Head -> next;
     } while(Head != Tail -> next);  

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
    PNODE last = NULL;    //#
    int iRet = 0;

    InsertFrist(&frist,&last,51);
    InsertFrist(&frist,&last,21);
    InsertFrist(&frist,&last,11);

    Display(frist,last);
    iRet = Count(frist,last);
    printf("(InsertFrist) Number of nodes are : %d\n",iRet);

    InsertLast(&frist,&last,101);
    InsertLast(&frist,&last,11);
    InsertLast(&frist,&last,121);

    Display(frist,last);
    iRet = Count(frist,last);
    printf("(InsertLast) Number of nodes are : %d\n",iRet);
    
    DeleteFrist(&frist,&last);

    Display(frist,last);
    iRet = Count(frist,last);
    printf("(DeleteFrist) Number of nodes are : %d\n",iRet);

    DeleteLast(&frist,&last);

    Display(frist,last);
    iRet = Count(frist,last);
    printf("(DeleteLast) Number of nodes are : %d\n",iRet);

    return 0;
}