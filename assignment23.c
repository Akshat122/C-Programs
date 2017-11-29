#include<stdio.h>
main(){
int a,b,c;
printf("Enter X coordinate:\t");
scanf("%d",&a);
printf("Enter Y coordinate:\t");
scanf("%d",&b);
if(a<0&&b>0)
    printf("The coordinate lies in the 1st Quadrant");
else if(a>0&&b>0)
    printf("The coordinate lies in the 2nd Quadrant");
else if(a<0&&b<0)
     printf("The coordinate lies in the 3rd Quadrant");
else if(a>0&&b<0)
     printf("The coordinate lies in the 4th Quadrant");
}
