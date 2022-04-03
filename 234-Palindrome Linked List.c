#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>




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


bool isPalidrome(ListNode  *head)
{


    int i,s,c,k,r;
    int d;
    int a[100000];
    i=0;
    d=0;
    while(head!=NULL)
    {

        a[i]=head->val;
        head=head->next;
        i++;
    }
    i-=1;
    s= i;
    if(s<0)
    {
        return false;
    }
    else
    {
        int front=0;
        int back=s;

        while(s>=0)
        {
            if(a[front]!=a[back])
            {
                return  false;
            }
            s--;
            front++;
            back--;
        }

    }

    return true;
}

int main()
{

    int A[]= {1,2,2,1};
    bool tf;
    int s;
    s= sizeof(A)/sizeof(int);

    ListNode *retValue;
    retValue= createList(A,s);
    printListV(retValue);
    printf("\n-------------------------------------\n");

    tf= isPalidrome(retValue);

    if(tf==1)
    {
        printf("\nTrue\n");
    }
    else
    {
        printf("False");
    }
    return 0;


}
