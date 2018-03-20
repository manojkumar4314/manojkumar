#include <stdio.h>
#include<conio.h>
void main() 
{
    int n,m,count=0;
    scanf("%d",&n);
    for(m=2;m<=(n/2);m++)
    {
        if(n%m==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("no..it is not composite");
    }
    else
    {
        printf("yes..it is composite");
    }
getch();
}
