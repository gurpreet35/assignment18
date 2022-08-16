// Write a function to count words in a given string
#include<string.h>
#include<stdio.h>
void count(char s[]);
int main(){
    char s[100];
    printf("Enter your string:");
    fgets(s,100,stdin);
    printf("%s",s);
    count(s);
    return 0;
}
void count(char s[]){
    int l,flag=0,count=0;
    l=strlen(s);
    for (int i = 0; i < l; i++)
    {
     if(s[i]==' '){
        count++;
        flag=1;
     }
    }
     if(flag==1)
     printf("%d",count+1);
    
    
}