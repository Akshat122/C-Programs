#include<stdio.h>
main()
{
    int x,y=2;
    printf("Enter any number :\t");
    scanf("%d",&x);
    if (x==1)
        printf("1 is neither prime  ");
    else
        {
            while (x%y!=0)
                   {
                    y++;
                   }
                   }
if (x==y)
    printf("prime no");
else if (x!=y&&x!=1)
    printf("not a prime no");
}
