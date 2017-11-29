#include<stdio.h>
#include<string.h>
int main(void)
{
char a[20],b[20];
gets(b);
strncpy(a,b,'\0');
puts(a);
}
