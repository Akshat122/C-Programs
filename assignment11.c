#include<stdio.h>
main()
{
int i,b=0,count=0;
   printf("enter a no:");
   scanf("%d",&i);
   while(i!=0)
   {

       i=i/10;
       printf("%d\n",i);
       count=count+1;
   }
printf("%d",count);
}
