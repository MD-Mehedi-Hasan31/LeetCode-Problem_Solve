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

ListNode *getIntersectionNoed(ListNode *headA, ListNode *headB)
{

    int sizeA=0;
    int sizeB=0;
    ListNode *tempA;
    ListNode *tempB;
    tempA=headA;
    tempB=headB;

    while(tempA!=NULL){
        sizeA++;
        tempA=tempA->next;
    }

    while(tempB!=NULL){
        sizeB++;
        tempB=tempB->next;
    }

    printf("Size of A: %d\n", sizeA);
    printf("Size of B: %d\n", sizeB);


    int diffAB=abs(sizeA-sizeB);

    printf("the Abs value is: %d\n", diffAB);

    //tempA=headA;
    //tempB=headB;
    while(tempA!=NULL){
        printf("%d, ", tempA->val);
        tempA=tempA->next;
    }
    printf("\n--After  Remove  value--\n");
    if(sizeA>sizeB){
        while(diffAB>0){
            headA=headA->next;
            diffAB--;
        }
    }
    else{

        while(diffAB>0){
                headB=headB->next;
                diffAB--;
        }
    }

     while(headA!=NULL && headB!=NULL){
        printf("HeadA: %d \t HeadB: %d\n", headA->val, headB->val);
        headA=headA->next;
        headB=headB->next;
     }
    printf("HeadB value is: %d\n", headA->val);
    printf("HeadB value is: %d\n",headB->val);

    while(headA!=headB){
            headA=headA->next;
            headB=headB->next;

        if(headA==NULL || headB==NULL){
            return NULL;
        }
    }

    return headA;
}

void printListV(ListNode *obj)
{

    while(obj!=NULL)
    {
        printf("%d-> ", obj->val);
        obj=obj->next;
    }
}

int main()
{

    int A[]= {4,1,8,4,5};
    int B[]= {5,6,1,8,4,5};


    int s;
    s= sizeof(A)/sizeof(int);
    int d= sizeof(B)/ sizeof(int);
    ListNode *valueA;
    ListNode *valueB;
    valueA=createList(A,s);
    valueB= createList(B,d);

    ListNode *returnValue;

    returnValue= getIntersectionNoed(valueA, valueB);
    if(returnValue!= NULL)
    {
        printf("the Value is: %d", returnValue->val);
    }
    else
    {
        printf("NULL");
    }

    //printListV(valueR);
    return 0;
}
