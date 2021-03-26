#include<stdio.h>
int main()
{
 int i,j;
 int s,t;
 s = t = 5;

 for(i=0;i<5;i++)
 {
  while(s-- > 1)
    printf(" ");
  for(j=0;j<=i;j++)
    printf("* ");

  printf("\n");
  t--;
  s = t;
}

 int k = 0;
 for (i=4;i>=1;i--) 
 {
  for (j=0;j<=4-i;j++) 
  {
    printf(" ");    	
   }
  k = 0;
  while (k != i)
  {
   printf("* "); 
   k++;
   }
   printf("\n");
 }
 return 0;
}