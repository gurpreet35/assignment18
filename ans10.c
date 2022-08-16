// Write a function to find the repeated character in a given string
#include <stdio.h>
#include <string.h>
void func_duplicate(char[]);
int main()
{
    char a[50];
    printf("Enter the value of string:");
    fgets(a, 50, stdin);
    printf("%s", a);
    func_duplicate(a);
    return 0;
}
void func_duplicate(char b[])
{
    int l, flag = 0;
    char c='#',a[10];
    l = strlen(b);
    printf(" the duplicate item is\are:\n");
    for (int i = 0; i < l-1; i++)
    {   int count =1;
        for (int j = i+1; j < l; j++)
        {
            if(i!=j && count!=2){
                if(b[i]==b[j]){
                    printf("%c",b[i]);   
                    count++;
                    b[j]=c;
                    c++; 
                    
                }   
        }
        }
        
    }
}