// . Write a function to transform string into uppercase
#include<string.h>
#include<stdio.h>
void upr(char []);
int main(){
    int l;
    char s[10];
    printf("Enter your string:");
    fgets(s,10,stdin);
    for (int i = 0;s[i]; i++)
    {
        printf("%c",s[i]);
    }
    upr(s);
    return 0;
}
void upr(char s[]){
    printf("String into uppercase:\n");
    strupr(s);
    printf("%s",strupr(s));    
}