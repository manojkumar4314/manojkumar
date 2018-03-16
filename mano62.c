#include <stdio.h>
#include<string.h>
void main() 
{
	char a[100];
	int m,i,num,count=0;
	scanf("%s",a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
	    if(a[i]=='0'||a[i]=='1')
	    {   
	        count++;
	    }
	    else
	    {
	       printf("No..");
	       break;
	    }
	}
	if(m==count)
	{
	     printf("Yes");
	}
	getch();
}

