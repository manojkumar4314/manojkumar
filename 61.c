#include <stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int n,i,count=0;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[n-i-1])
        {
            count++;
        }
    }
    if(n==count)
    {
        printf("yes..it is palindrome");
    }
    else
    {
        printf("not");
    }
getch():
}
