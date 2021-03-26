#include<stdio.h>
int main()
{
 int n,rev=0;
 int rem,t;
 
 printf("Enter a number \n");
 scanf("%d",&n);
 t = n;

 while(t!=0)
 {
  rem = t%10;
  rev = (rev*10)+rem;
  t = t/10;
  }

 if(n==rev)
  printf("Given number is palindrome");
 else
  printf("Given number is not palindrome");

 return 0;
}