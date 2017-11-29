#include <stdio.h>
 int main()
{
   int a,rev=0;
    printf("Enter a number to reverse\n");
   scanf("%d",&a);
    while (a!= 0)
   {
      rev=rev*10;
      rev=rev+a%10;
      a=a/10;
   }
    printf("Reverse number is :%d\n",rev);
}
