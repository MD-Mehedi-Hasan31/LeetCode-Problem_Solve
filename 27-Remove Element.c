#include<stdio.h>

int removeElement(int num[], int numSize, int val)
{
    int i=0,r=0;
    while(i<numSize)
    {

        if(num[i]  != val)
        {

            num[r]  = num[i];
            r+=1;
        }

    i++;
    }
      return r;
}

int main()
{
    int num[100],numSize,val;

    printf("Please enter the size of   the  array: ");
    scanf("%d", &numSize);

    printf("Please enter the  list: \n");
    for(int i=0; i<numSize; i++)
    {

        scanf("%d", &num[i]);
    }

    printf("Enter the Target value: ");

    scanf("%d", &val);


    int removeValue = removeElement(num, numSize, val);

    printf("The total number value is: %d", removeValue);

    return 0;
}
