#include<stdio.h>

int main()
{
 int N;
 printf("Enter a number \n");
 scanf("%d",&N);
 printf("The prime numbers between 1 and N are: \n");
 
 int i,j,c=0;

 for(i=1;i<N;i++)
 {
  c=0;
  for(j=1;j<=i;j++)
  {
    if(i%j==0)
      c++;
   }
  if(c==2)
    printf("%d ",i);
 }

return 0;
}