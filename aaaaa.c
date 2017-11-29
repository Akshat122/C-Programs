#include<stdio.h>
int main(){
char s[10],b[10];
int i;
puts("enter some char.:\t");
gets(s);
for(i=0;i<20;i++)
 {
if(s[i]>='A'&&s[i]<='Z')
{
    b[i]=s[i]+32;
s[i]=b[i];
}
else
    s[i]==b[i];
}
puts(b);
}
