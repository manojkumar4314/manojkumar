#include <stdio.h>
#include<conio.h>
int main(void) 
{
	float m;
	int a;
	scanf("%f",&m);
	if(m<0)
	{
	    a=(int)(m-0.5);
	}
	else
	{
	    a=(int)(m+0.5);
	}
	printf("%d",a);
	return 0;
}
