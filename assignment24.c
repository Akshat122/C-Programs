#include<stdio.h>
main(){
int a,b;
printf("Enter a year:\t ");
scanf("%d",&a);
if(a%4==0)
    printf("Leap year");
else
    printf("Not a leap year");

}
