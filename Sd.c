#include<stdio.h>
main ()
{
int a,b,c,d,i=0,f;
printf("Enter starting no:\t");
scanf("%d",&a);
printf("Enter ending no:\t");
scanf("%d",&b);
printf("Enter multiplication no:\t");
scanf("%d",&c);
while(a!=b)
{
a--;
d=c*a;
printf("%d\t",d);
}
}
