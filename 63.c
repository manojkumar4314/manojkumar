#include <stdio.h>
#include<string.h>
void main() 
{
	char m[100];
	int n,i,count=0;
	scanf("%[^\t\n]s",m);
	n=strlen(m);
	for(i=0;i<n;i++)
	{
	    if(m[i]==' ')
	    {   
	        count++;
	    }
	    else
	    {
	        continue;
	    }
	}
    printf("%d",count+1);
	getch();
  }
