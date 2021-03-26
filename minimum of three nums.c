#include <stdio.h>
#include <stdlib.h>

int main()
{

 int a,b,c,f=0;
 printf("Input 3 numbers \n");
 scanf("%d%d%d",&a,&b,&c);

 int choice,min,t;
 printf("Enter choice for method \n");
 printf("1.If-Else 2.conditional/ternary 3.arithematic operation \n");
 scanf("%d",&choice);

 switch(choice)
 {
t     case 1:
        if(a<b&&a<c)
            min = a;
        else if(b<c)
            min = b;
        else
            min = c;

        printf("Minimum number is: %d",min);
        break;

     case 2:
        t = (a<b)?a:b;
        min = (c<t)?c:t;
        printf("Minimum number is : %d",min);
        break;

     case 3:
        while(a&&b&&c)
        {
         a--;
         b--;
         c--;
         f++;
        }
        printf("Smallest number: %d",f);
        break;

     default: printf("Invalid Input!");
              break;
 }
return 0;
}
