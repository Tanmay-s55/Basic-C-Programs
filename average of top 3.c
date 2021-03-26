#include <stdio.h>
#include <stdlib.h>

//average of top 3 results
int main()
{
    int a,b,c,d;
    int min =0;
    printf("Enter the numbers \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if((a<b)&&(a<c)&&(a<d))
    {
        min = a;
    }
    else if((b<c)&&(b<d))
    {
        min = b;
    }
    else if(c<d)
    {
        min = c;
    }
    else
    {
        min = d;
    }
    int sum = (a+b+c+d)-min;
    float avg = (float)sum/3;
    printf("Average of top three result is: %f",avg);
    return 0;
}
