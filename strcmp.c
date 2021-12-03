#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
     char string[20],string2[20];
     printf("Enter the two strings : \n");
     gets(string);
     gets(string2);
     if(strcmp(string,string2)==0)
     {
         printf("\n");
     printf("strings are  identical\n");
     }
     else 
     {
         printf("\n");
         printf("strings are not  identical");

     }
     return 0;      
}