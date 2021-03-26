#include<stdio.h>

int main()
{
 int N;
 printf("Enter number \n");
 scanf("%d",&N);
 int f,l;

 l = N%10;

 while(N>=10)
 {
   N = N/10;
 }

 f = N;

 printf("first digit is %d and last digit is %d",f,l);

 return 0;
}
