#include<stdio.h>
#include<math.h>
main(){
int a ,b, c;
float p,d,s,e;
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
else{
    printf("It a triangle:");
e=a+b+c;
p=e/2;
d=p*(p-a)*(p-b)*(p-c);
e=sqrt(d);
printf("\n%f",e);
}
}
