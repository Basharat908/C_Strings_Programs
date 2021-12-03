#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char string1[20],string2[20];
    printf("Enter the two strings\n");
    gets(string1);
    gets(string2);
   strcpy(string1,string2);
   printf("value of the string1 gets lost and is replaced by string2='%s'\n",string1);
   printf("Value of the string 2='%s'\n",string2);
   return 0;

}