#include<stdio.h>
main()
{
char a;
int b;
printf("enter a char\t");
scanf("%c",&a);
if (a>=97&&a<=122)
    printf("Lower case");
else
    printf("Upper case");
}
