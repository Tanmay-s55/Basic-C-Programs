#include<stdio.h>
int main()
{
 int i,j;
 int r,c;
 printf("Input number of rows and columns \n");
 scanf("%d%d",&r,&c);

 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   if(i==1||i==r||j==1||j==n)
	printf("*
");
   else
	printf(" ");
  }
 printf("\n");
 }
return 0;
    
}