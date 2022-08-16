//  Write a function to reverse a string.
#include<string.h>
#include<stdio.h>
void rev(char [],int);
int main(){
    int l;
    char t[10],s[10];
    printf("Enter your string:");
    fgets(s,10,stdin);
    for (int i = 0;s[i]; i++)
    {
        printf("%c",s[i]);
    }
    l=strlen(s);
    rev(s,l);
    return 0;
}
void rev(char s[],int l){
    printf("\n The reverse of string is:");
    for (int i = l;i>=0; i--)
    {
        printf("%c",s[i]);
    }
}