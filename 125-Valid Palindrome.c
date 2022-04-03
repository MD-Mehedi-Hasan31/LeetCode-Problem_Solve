#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isPalindrome(char * s){
    
    int i=0,t,r,f,c=0;
    char value[100];
    t=strlen(s);
    while(i<t){
        if(s[i]>=65 && s[i]<=90){
            s[i]='a'+(s[i]-'A');
        }
    i++;
    }
    r=0;
    i=0;
    
    while(i<t){
          if (isalnum(s[i]))
        {
            s[r]=s[i];
            r++; 
        }
    i++;
    }
    s[r]='\0';

    i=0;
    f=strlen(s);
    while(i<f){
        if(s[i] !=s[f-1]){
            return false;
        }
        i++;
        f--;
    }
    return true;
}

int main()
{
    char num[1000];
    gets(num);
    bool returnValue;
    returnValue=isPalindrome(num);
    if(returnValue==1){
        printf("True\n");
    }
    else{
         printf("FALSE\n");
    }

return 0;
}
