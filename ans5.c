// Write a function to transform a string into lowercase
#include<string.h>
#include<stdio.h>
void lwr(char []);
int main(){
    int l;
    char s[10];
    printf("Enter your string:");
    fgets(s,10,stdin);
    for (int i = 0;s[i]; i++)
    {
        printf("%c",s[i]);
    }
    lwr(s);
    return 0;
}
void lwr(char s[]){
    printf("String into lowercase:\n");
    strlwr(s);
    printf("%s",strlwr(s));    
}