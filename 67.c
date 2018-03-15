#include<stdio.h>
void main()
{
        int a,i;
        printf("Enter a number");
        scanf("%d",&a);
        for(i=10;i<=100;i=i+10)
        {
        if(i>a)
        {
                printf("\n%d",i);
                break;
        }
}
}
