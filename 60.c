#include<stdio.h>        
void main()
{
    int m,i;
    int a=1,b=1,c;
    scanf("%d",&m);
    printf("%d  %d  ",a,b);
    for(i=2;i<m;i++)
    {
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;
    }
   getch();
}
