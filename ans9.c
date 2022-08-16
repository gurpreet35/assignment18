// . Write a function to reverse a string word wise. (For example if the given string is
// “Mysirg Education Services” then the resulting string should be “Services Education
// Mysirg” )
#include <stdio.h>
void count(char s[]);
int main()
{
   char s[100];
   printf("Enter your string:");
   fgets(s, 100, stdin);
   count(s);
   return 0;
}
void count(char s[])
{
   int set[3], j = 0, flag = 0, count = 0;
   for (int i = 0;s[i]; i++)
   {
      if (s[i] == ' ')
      {
         count++;
         set[j] = i;
         j++;
      }
   }
   for (j = count-1 ; j > count - 2; j--)
   {
      for (int i = set[j]; s[i]; i++)
         printf("%c", s[i]);
   }
   for (j = count - 2; j >= 0; j--)
   {
      for (int i = set[j]; i != set[j + 1]; i++)
         printf("%c", s[i]);   
      break;
   }
   for (j = count - 3; j > -1; j--)
   {
      for (int i = set[j]; i != set[j + 1]; i++)
         printf("%c", s[i]);
   }
   printf(" ");
   for (int i = 0; s[i] != ' '; i++)
      printf("%c", s[i]);
}
