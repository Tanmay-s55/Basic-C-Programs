#include<stdio.h>

int main()
{
 int i,n,f=0,s=1,t;
 printf("Enter number of terms \n");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
  printf("%d, ",f);
  t = s+f;
  f = s;
  s = t;
  }

 return 0;
}