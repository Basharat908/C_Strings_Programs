#include<stdio.h>
#include<conio.h>
int main()
{
    char a[10],b[10];
    int i;
    printf("enter two strings\n");
    gets(a);
    gets(b);
    i=0;
    while(b[i]!='\0')
    {
        a[i]=b[i];
         i++;
    }
    printf("copied string=%s",a);
    return 0;
}