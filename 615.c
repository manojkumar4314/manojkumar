#include <stdio.h>
#include<string.h>
void main() 
{
	char a[100];
	int r,i,num;
	scanf("%s",a);
	scanf("%d",&num);
	r=strlen(a);
    for(i=0;i<num;i++)
    {
        printf("%c",a[i]);
    }
	getch();
}

