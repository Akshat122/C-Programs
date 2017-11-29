#include<stdio.h>
int main(void) {
int i=0,b=0;
char str[50];
printf("Enter a sentence");
gets(str);
for(i=0; str[i]!='\0'; i++)
 {
   if(str[i-1]==' ' || i==0)
   {
     if(str[i]>='a' && str[i]<='z')
       str[i]=str[i]-32;

   }
   printf("%c",str[i]);
 }


}
