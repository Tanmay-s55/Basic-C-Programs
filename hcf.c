
#include<stdio.h>
int main()
{
 int a,b,hcf = 0;

 printf("Enter two numbers \n");
 scanf("%d%d",&a,&b);

 for(int i=1;i<=a && i<=b;i++) //if here i=0 then floating point exception because of div by 0
 {
   if(a%i==0 && b%i==0)
     hcf = i;
 }

printf("The hcf of %d and %d is: %d",a,b,hcf);

return 0;
}

