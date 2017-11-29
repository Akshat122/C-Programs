#include<stdio.h>

main(){
int a ,b, c, d;
printf("Enter 1st side of triangle:");
scanf("%d",&a);
printf("Enter 2nd side of triangle:");
scanf("%d",&b);
printf("Enter 3rd side of triangle:");
scanf("%d",&c);
if(a+b<=c)
printf("Not a triangle:");
else if(b+c<=a)
printf("Not a triangle:");
else if (c+a<=b)
    printf("Not a triangle:");
else
    printf("It a triangle:");

}
