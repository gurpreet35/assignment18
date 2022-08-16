// Write a function to check whether a given string is an alphanumeric string or not. 
// (Alphanumeric string must contain at least one alphabet and one digit)
#include<string.h>
#include<stdio.h>
void check(char []);
int main(){
    int l;
    char s[10];
    printf("Enter your string:");
    fgets(s,10,stdin);
    check(s);
    return 0;
}
void check(char s[]){
    int l,flag=0;
    l=strlen(s);
    for (int i = 0; i < l; i++)
    {
         if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')||(s[i]>='1' && s[i]<='9')){
           if(i==(l-1))
            flag=1;
         }
    }
    if(flag==1){
        printf("your string %s is alphanumeric string!",s);
    }
    else
     printf("your string %s is not a alphanumeric string!",s); 
}