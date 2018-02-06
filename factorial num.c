#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,n,i;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=a*i;
}
printf("the factorial is%d",a);
getch();
}
