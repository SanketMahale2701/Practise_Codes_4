// Program 277
// Insert at position function with doubly linklist

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
    PNODE temp = *Head;
   newn =(PNODE)malloc(sizeof(NODE));

   newn -> data = iNo;
   newn -> next = NULL;
   newn -> prev = NULL;    //#
   if(*Head == NULL)       // LL is empty
   {
     *Head = newn;
   }
   else                    // LL contains atleast one node in it
   {
      while(temp -> next != NULL)
      {
        temp = temp -> next;
      }
      temp -> next = newn;
      newn -> prev = temp;   //#
   }

}
void DeleteFrist(PPNODE Head)
{
    if(*Head == NULL)                   //if linklist is empty
    {
       return;
    }
    else if((*Head) -> next == NULL)   // if linklist contains one node only
    {
       free(*Head);
       *Head = NULL;
    } 
    else                              //if linklist contains more than one node
    {
       *Head = (*Head) -> next; 
       free((*Head) -> prev);
       (*Head) -> prev = NULL;
    }
}
void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)                   //if linklist is empty
    {
       return;
    }
    else if((*Head) -> next == NULL)   // if linklist contains one node only
    {
       free(*Head);
       *Head = NULL;
    } 
    else                              //if linklist contains more than one node
    {
        while(temp -> next -> next != NULL)    // type three loop
        {
            temp = temp -> next;
        }
        free(temp -> next);
        temp -> next = NULL;
    }   
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
     printf("NULL\n");
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
void InsertAtPos(PPNODE Head,int iNo,int iPos)
{
    int iLength = 0;
    iLength = Count(*Head);
    PNODE newn = NULL;
    PNODE temp = *Head;
    int iCnt = 0;

    if((iPos < 1)&&(iPos > iLength + 1))
    {
        printf("INVALID INPUT\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFrist(Head,iNo);
    }
    else if(iPos == iLength + 1)
    {
        InsertLast(Head,iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;        //#

        for(iCnt = 1;iCnt < iPos - 1;iCnt++ )
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next -> prev = newn;  //#
        temp -> next = newn;          
        newn -> prev = temp;          //#
    }
}
void DeleteAtPos(PPNODE Head,int iPos)
{
    int iLength = 0;
    iLength = Count(*Head);
    PNODE temp = *Head;
    int iCnt = 0;

    if((iPos < 1)&&(iPos > iLength))
    {
        printf("INVALID INPUT\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFrist(Head);
    }
    else if(iPos == iLength)
    {
        DeleteLast(Head);
    }
    else
    {

        for(iCnt = 1;iCnt < iPos - 1;iCnt++ )
        {
            temp = temp -> next;
        }
    }
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
    printf("The count of nodes are : %d\n",iRet);
    Display(frist);

    InsertLast(&frist,111);
    InsertLast(&frist,121);

    iRet = Count(frist);
    printf("The count of nodes are : %d\n",iRet);
    Display(frist);

    InsertAtPos(&frist,55,4);

    iRet = Count(frist);
    printf("The count of nodes are : %d\n",iRet);
    Display(frist);

    DeleteFrist(&frist);

    iRet = Count(frist);
    printf("The count of nodes are : %d\n",iRet);
    Display(frist);

    DeleteLast(&frist);
    iRet = Count(frist);
    printf("The count of nodes are : %d\n",iRet);
    Display(frist);

    return 0;
}