#include <stdio.h>
#include<string.h>
void main() 
{
	char a[100];
	int k,i,num,count=0;
	scanf("%s",a);
	k=strlen(a);
	for(i=0;i<k;i++)
	{
	    if(a[i]=='0'||a[i]=='1')
	    {   
	        count++;
	    }
	    else
	    {
	       printf("no..");
	       break;
	    }
	}
	if(k==count)
	{
	     printf("yes...it is in binary representation");
	}
	getch();
}
