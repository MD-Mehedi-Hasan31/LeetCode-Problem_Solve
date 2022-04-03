
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};
typedef struct Node ListNode;
ListNode *InsertValue(int a[], int i)
{
    ListNode *head=NULL;
    ListNode *cur;
    ListNode *temp;
    int j=0;
    while(i>=0)
    {
        temp=(ListNode*) malloc(sizeof(ListNode));
        temp->val=a[j];
        temp->next=NULL;

        if(head==NULL)
        {
            head=temp;
            cur=head;
        }
        else
        {
            cur->next=temp;
            cur=cur->next;
        }
        j++;
        i--;
    }
    return head;
}

ListNode *reverseList(ListNode *head){

    ListNode *prev;
    ListNode *cur;
    ListNode *nextNode;

    prev=0;
    cur=head;
    nextNode=head;

    while(nextNode!=NULL){

        nextNode=nextNode->next;
        cur->next=  prev;
        prev=cur;
        cur=nextNode;
    }

    head=prev;

    return head;

}

void printValue(ListNode *obj)
{
    while(obj!=NULL)
    {
        printf("%d-> ",obj->val);
        obj=obj->next;
    }
}

int main(){

    int value[]= {1,1,2,3,3};
    ListNode *returnValueNode;
    returnValueNode=InsertValue(value,4);
    printf("---The  real Node is---\n");
    printValue(returnValueNode);
    printf("---The Reverse Node is---\n");
    ListNode *rev= reverseList(returnValueNode);
    printValue(rev);


    return 0;
}
