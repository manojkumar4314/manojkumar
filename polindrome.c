#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	int x=0;
	printf("enter the number");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		x=x*10+b;
		a=a/10;
	}
	
	if(x==a)
	printf("%d is a palindrome",a);
	else
	printf("%d is not a palindrome",a);
}
