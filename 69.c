#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m,diff=0;
    scanf("%d%d",&n,&m);
    if(n>m)
    {
    diff=n-m;
    }
   else
   {
     diff=m-n;
   }
  
    if(diff%2==0)
    {
        printf("Even");
        
    }
    else
    {
        printf("Odd");
        
    }
    getch();
    
}
