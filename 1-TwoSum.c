#include<stdio.h>
#include<stdlib.h>


int *twoSum(int *nums, int numsSize, int target)
{
    int *returnSize=(int*) malloc(2*sizeof(int));

    int f=0;
    int i;
    int d;
    int c;
    for(i=0;i<numsSize;i++){

        d=0;
        d=numsSize-1;
        while(i<d){
            c=nums[i]+nums[d];

            if(c==target){
                returnSize[f]=i;
                f++;
                returnSize[f]=d;
                break;
               
            }
            else{
                d--;
            }
        }

    }

    return returnSize;
}


int main()
{

    int c[]= {3,3};
    int *valueR;
    valueR=twoSum(c,2,6);

    int j;
    for(j=0;j<2;j++){
        printf("%d ",valueR[j]);
    }

    return 0;
}
