#include<stdio.h>

int main()
{
 
 int n,r,t=1,bnum=0;
 printf("Enter the number: \n");
 scanf("%d",&n);

 while(n!=0)
 {
  r = n%2;
  n = n/2;
  bnum = bnum +(r*t);
  t = t*10;
 }

printf("Binary equivalent: %d",bnum);

return 0;
}