#include<stdio.h>
int main()
{
    int b,c[50];
    scanf("%d",&n);
    int b,max;
    for(b=0;b<n;b++)
    {
        scanf("%d",&c[b]);
    }
    max=a[0];
    for(b=0;b<n;b++)
    {
        
        if(max<c[b])
        {
            max=c[b];
            break;
        }
    }
    printf("%d",max);
    return 0;
}

