
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};
typedef struct Node ListNodet;
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

ListNode *DeleteValue(ListNode*headValue){

        if(!headValue){
            return headValue;
        }

        ListNode *cur;
        cur=headValue;

        while(cur->next){
            if(cur->val== cur->next->val){

                ListNode*free_cur=cur->next;
                cur->next= cur->next->next;
                free(free_cur);
                continue;
            }
            cur=cur->next;
        }

        return headValue;

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
    int value[]= {1,1,2,3,3};
    ListNode *returnValueNode;
    returnValueNode=InsertValue(value,4);
    printValue(returnValueNode);

    printf("\n==========================================\n");


    ListNode *newValue= DeleteValue(returnValueNode);
    printValue(newValue);
}
