#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int value;
    struct Node *next;
};

typedef struct Node MyLinkedList;



MyLinkedList *InsertValue(int a[], int i)
{
    MyLinkedList *head=NULL;
    MyLinkedList *cur;
    MyLinkedList *temp;
    int j=0;
    while(i>0)
    {

        temp=(MyLinkedList*) malloc(sizeof(MyLinkedList));
        temp->value=a[j];
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

void printValue(MyLinkedList *obj){

    while(obj!=NULL){
        printf("%d-> ",obj->value);
        obj=obj->next;
    }
}

MyLinkedList *FindValue(MyLinkedList *head){

        MyLinkedList *slow=head;
        MyLinkedList *fast=head;

        while((fast!=NULL && fast->next!=NULL)&&(fast!=NULL || fast->next!=NULL)){
                slow=slow->next;
                fast=fast->next->next;
        }
    return slow;
}
int main()
{
    int d[]={1,2,3,4,5};
    MyLinkedList *printVal=InsertValue(d,5);
    printValue(printVal);

    MyLinkedList *findVal;

    findVal=FindValue(printVal);

    printf("The Finding Value Is: %d\n", findVal->value);


    return 0;
}
