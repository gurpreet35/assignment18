//  Write a function to compare two strings
#include<stdio.h>
#include<string.h>
void compare(char [],char []);
int main(){
    char s[20],t[20];
    printf("Enter your  1-string :");
    fgets(s,20,stdin);
    printf("Enter your  2-string :");
    fgets(t,20,stdin);
    compare(s,t);
    return 0;
}
void compare(char s[],char t[]){
    if(strcmp(s,t)==0){
        printf("Both string are same.");
    }
    else
        printf("Both string are not same.");

}