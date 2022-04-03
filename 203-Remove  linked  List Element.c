#include<stdio.h>
#include<stdlib.h>
#include<math.h>



typedef struct Node
{
    int val;
    struct Node *next;
} ListNode;

ListNode *createList(int a[], int s)
{

    ListNode *head= NULL;
    ListNode *temp;
    ListNode *run;


    for(int i=0; i<s; i++)
    {

        temp= (ListNode*)malloc(sizeof(ListNode));

        temp->val= a[i];
        temp->next= NULL;

        if(head== NULL)
        {

            head= temp;
            run= temp;
        }
        else
        {
            run->next= temp;
            run=run->next;
        }

    }

    return head;
}

void printListV(ListNode *obj)
{

    while(obj!=NULL)
    {
        printf("%d-> ", obj->val);
        obj=obj->next;
    }
}


ListNode* removeElement(ListNode  *head, int  val)
{

    ListNode *slow;
    ListNode *fast;

    while(head!=NULL && head->val==val){
        head=head->next;
    }

         if(head==NULL){
        return NULL;
    }
    slow=head;
    fast=head->next;


    while(fast!=NULL)
    {

        if(fast->val==val)
        {
            slow->next=fast->next;
            fast=slow->next;
        }
        else
        {
            fast=fast->next;
            slow=slow->next;

        }
    }

    return head;

}


int main()
{

    int A[]= {6,2,6,3,4,5,6};

    int s;
    s= sizeof(A)/sizeof(int);

    ListNode *retValue;
    retValue= createList(A,s);
    printListV(retValue);
    printf("\n-------------------------------------\n");
    ListNode *revValue;
    revValue=removeElement(retValue,6);

    printListV(revValue);
    return 0;


}
