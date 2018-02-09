#include <stdio.h>
#include<string.h>
int main() 
{
	char b[1000];
	int n,i,count=1;
	scanf("%[^\t\n]s",b);
	n=strlen(b);
	for(i=0;i<n;i++)
	{
	   if(b[i]=='.'&& b[i+1]!='\0')
	    {
	        count++;
	    }
	}
	printf("%d",count);
	return 0;
}
