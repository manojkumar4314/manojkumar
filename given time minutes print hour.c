#include<stdio.h>
#include<conio.h>
void main()
{
int a,hr,min;
print("\n enter the minute:");
scanf("%d",&a);
if(a!=0)
{
hr=a/60;
min=a%60;
printf("\n hr;min=%d,%d",hr,min);

}
getch();
}
