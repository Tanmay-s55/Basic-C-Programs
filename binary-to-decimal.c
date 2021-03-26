#include<stdio.h>
#include<math.h>

int main()
{
 int n,i=0,sum=0;

 printf("Enter a binary number: \n");
 scanf("%d",&n);
 
 int t;
 while(n!=0)
 {
  t = n%10;
  n = n/10;
  sum = sum+(pow(2,i)*t);
  i++;
 }

printf("Decimal equivalent of given number is : %d",sum);

return 0;
}