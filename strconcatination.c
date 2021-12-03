 #include<stdio.h>
#include<conio.h>
#include<string.h> 

int main()
{
    char s[35],p[30];
    int i,j;
    printf("Enter the first string\n");
    gets(s);
    printf("Enter the second string\n");
    gets(p);
    printf("\n");
    printf("first string = ");
    puts(s);
    printf("second string =");
    puts(p);
    strcat(s,p);

        printf("After concatination\n");
        printf("first string = ");
        puts(s);
        printf("second string = ");
        puts(p);
         return 0;
    }