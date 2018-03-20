#include <stdio.h>
void main() 
{
	int k,r,l,i;
	scanf("%d",&k);
	scanf("%d %d",&l,&r);
	for(i=l;i<r;i++)
	{
	    if(k>=l&&k<=r)
	    {
	        printf("yes..%d is between %d and %d",k,l,r);
	        break;
	    }
	}
	  if(!(k>=l&&k<=r))
	   {
	        printf("it is not");
	   }
	getch();
}
