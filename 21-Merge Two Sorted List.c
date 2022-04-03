#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int val;
    struct ListNode *next;

} ListNode;

ListNode *CreateNode(int num[], int value)
{
    ListNode *head;
    ListNode *temp;
    ListNode *cur;
    head=NULL;
    temp=NULL;
    cur=NULL;

    int i;
    for(i=0; i<=value; i++)
    {

        temp=(ListNode*)malloc(sizeof(ListNode));

        temp->val=num[i];
        temp->next=NULL;

        if(head==NULL)
        {
            head=temp;
            cur=temp;

        }
        else
        {
            cur->next=temp;
            cur=cur->next;

        }
        cur->next= NULL;
    }
    return head;
}
ListNode *MargeSort(ListNode *l1, ListNode *l2)
{
       
   ListNode *newNode=(ListNode*)malloc(sizeof(ListNode));
   newNode->val=0;
   struct ListNode *temp=newNode;
   struct ListNode *p1,*p2;
    p1=l1;
    p2=l2;
    
       
    if(p1==NULL && p2==NULL){
        return p1;
    }    
    else{
        
         while(p1!=NULL && p2!=NULL)
    {

        if(p1->val >= p2->val)
        {
            temp->next=p2;
            p2=p2->next;
        }
        else
        {
            temp->next=p1;
            p1=p1->next;
        }
        temp=temp->next;
    }
    }

    if(p1!=NULL)
    {
        temp->next=p1;;

    }
    if(p2!=NULL)
    {
        temp->next=p2;
    }

 return newNode->next;
}

void printValue(ListNode *obj)
{

    while(obj!=NULL)
    {
        printf("%d-> ",obj->val);
        obj=obj->next;
    }
}

int main()
{
    int a[]= {1,2,3};
    int b[]= {1,4};

    ListNode *d1;
    ListNode *d2;

    ListNode *sortValue;
    d1=CreateNode(a,2);
    d2=CreateNode(b,1);
    sortValue= MargeSort(d1,d2);
    printValue(sortValue);


    return 0;
}
