#include<stdio.h>
int main()
{
    int r,a,b;
    scanf("%d%d",&a,&b);
    r=a;
    a=b;
    b=r;
    printf("%d %d",a,b);
    return 0;
    
}
