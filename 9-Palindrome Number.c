#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x){
    
    int s,c;
    int k;
    long long int r;
    s=x;

    if(s<0){
        return false;
    }
    else if(s>=0 && s<=9){
        return true;
    }
    else{
        r=0;
        while(s>0){
            c=s%10;
            k=(r*10);
            r=k+c;
            s=s/10;
        }

       if(r==x){
        return true;
       }
    }
return false;

}

int main(){

    int n;
    bool val;
    printf("Please enter a number: ");
    scanf("%d",&n);
    val=palidromValue(n);
    printf("%s",val?"true":"false");
    return 0;
}

