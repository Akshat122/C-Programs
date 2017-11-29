#include<stdio.h>
main()
{
int i,b,c=1,d,e=0,f,g;
scanf("%d",&i);
for(i;b!=0;b)
{
 b=i%10;
 i=i/10;
d=b*c;
if(d==0){}
 else {
 printf(" %d +",d);
 }
  e=e+d;
 c=c*10;
}
 printf(" \n%d\n",e);
}
