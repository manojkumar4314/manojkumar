#include <stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int m,i,temp;
    scanf("%s",a);
    m=strlen(a);
    if(m%2!=0)
      {
          temp=m/2;
          a[temp]='*';
          printf("%s",a);
      }
      else
      {
          temp=m/2;
          a[temp]='*';
          a[temp-1]='*';
          printf("%s",a);
      }
        getch();
}
