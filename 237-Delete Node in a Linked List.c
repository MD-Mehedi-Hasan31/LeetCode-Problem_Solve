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

void deleteNode(ListNode *node){

        node->val= node->next->val;
        node->next=node->next->next;

        while(node!=NULL){
            printf("%d-> ", node->next);
            node=node->next;
        }
}

int main(){

    int d[]={4,5,1,9};
    int s= sizeof(d)/ sizeof(int);

    ListNode *value= createList(d,s);

    int a=2, b=3,c;

  value= value->next;
  deleteNode(value);


    return 0;
}
