#include<stdio.h>
#include<conio.h>
void main()
{
int s=1,h,i;
clrscr();
scanf("%d",&h);
for(i=1;i<=h;i++)
{
s=s*i;
}
printf("the factorial is%d",s);
getch();
}
