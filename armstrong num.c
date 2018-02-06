#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,n,n1,remainder;
clrscr();
scanf("%d",&n);n1=n;
while(n>0)
{
reainder=n%10;
a=a+(reainder*remainder*remainder);
n=n/10;
}
if(n1==a)
{
printf("armstrong num");
}
else
{
printf(" not amstrong num");
}
getch();
}
