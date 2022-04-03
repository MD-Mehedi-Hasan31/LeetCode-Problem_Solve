#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node
{
    int value;
    struct Node* next;
} listNode;



listNode *createList(int a[], int size, int circleValue)
{

    listNode *head=NULL;
    listNode *temp;
    listNode *current;
    listNode *runValue;
    listNode *prev;
    int i;
    for(i=0; i<size; i++)
    {
        temp=(listNode*) malloc(sizeof(listNode));
        temp->value= a[i];
        temp->next= NULL;
        if(head == NULL)
        {
            head= temp;
            current=head;
            runValue=head;
        }
        else
        {
            current->next= temp;
            current=current->next;
        }

    }


    while(runValue!=NULL)
    {

        if(runValue->value== circleValue)
        {
            current->next=prev->next;
            break;
        }
        prev= runValue;
        runValue=runValue->next;

    }

    return head;
}

bool cycleList(listNode *cycleValue)
{


    listNode *slow= cycleValue;
    listNode *fast=cycleValue->next;

    /*if(cycleValue==NULL)
        {
            return false;
        }
        */
    while(fast!= NULL && fast->next!=NULL)
    {



        if(slow==fast)
        {
            return true;

        }
        fast=fast->next->next;
        slow=slow->next;

    }

    return false;
 bn
}

int main()
{

    int d[]= {20,45,12,42,90,67,15,28,64,85};

    int size= sizeof(d)/ sizeof(int);

    listNode *findValue;
    findValue=createList(d,size,42);

    //printList(findValue);
    bool isExist= cycleList(findValue);

    //printf("%d ", isExist->value);

    if(isExist== true)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }


    return 0;
}
