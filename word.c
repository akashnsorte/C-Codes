#include <stdio.h>
#include<string.h>
int main()
{
   char s[100];
   printf("Enter string ");
   gets(s);
   strrev(s);
   printf("Reverse: %s", s);
}