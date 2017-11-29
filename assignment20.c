#include<stdio.h>
main(){
int a,b,c,d;
printf("Enter a Month:\t");
scanf("%d",&b);
printf("Enter a Date:\t");
scanf("%d",&a);
printf("Enter a Year:\t");
scanf("%d",&c);
if(c%4==0)
{
    if(b=2)
    {
    if(a>=30||a<=0)
            printf("Enter a valid date");
    else
    printf("Its a valid date :");
    }

}
else
    {
        if(b<12)
        {


if(b=1,3,5,7,8,10,12)
{
    if(a<=32&&a>=0)
    printf("Enter a valid date");
    else
    printf("Its a valid date :");
}
else
{
    if(a<=29&&a>=0)
    printf("Enter a valid date");
    else
    printf("Its a valid date:");
}
        }
else
    printf("Enter a valid Month");


}
}
