//  Write a function to calculate length of the string
#include<string.h>
#include<stdio.h>
int main(){
    int l;
    char s[10];
    printf("Enter your string:");
    fgets(s,10,stdin);
    for (int i = 0;s[i]; i++)
    {
        printf("%c",s[i]);
    }
    l=strlen(s);
    printf("\nLength of the string is: %d",l);
    return 0;
}