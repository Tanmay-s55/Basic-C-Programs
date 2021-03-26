//To check for armstrong number
#include<stdio.h>

int main()
{
 int N,t,d,sum=0;

 printf("Enter a number \n");
 scanf("%d",&N);

 t = N;
 while(t>0)
 {
  d = t%10;
  sum = sum+(d*d*d);
  t = t/10;
 }

 if(sum == N)
  printf("%d is an Armstrong number",N);
 else
  printf("%d is NOT an Armstrong number !",N);

return 0;

}