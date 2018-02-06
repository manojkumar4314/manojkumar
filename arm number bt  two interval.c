#include <stdio.h>
int main()
{
  int a, b, m, temp, num, rem;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &a, &b);
  printf("Armstrong numbers between %d an %d are: ", a, b);
  for(m=a+1; m<b; ++m)
  {
      temp=m;
      num=0;
      while(temp!=0)
      {
          rem=(temp%10);
          num+=rem*rem*rem;
          temp/=10;
      }
      if(m==num)
      {
          printf("%d ",m);
      }
  }
  return 0;
}
