#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int num[9],r,i,sum,max,min,a;
    srand((unsigned)time(NULL));

    for (i=0;i<=9;i++)
    {
        r=rand()%100+1;
        num[i]=r;
    }
    for (i=0;i<=9;i++)
    {
        sum+=num[i];
        printf("%d\n",num[i]);
    }
    max=num[0];
    min=num[0];
    for (i=1;i<=9;i++)
    {
        if(num[i]>=max) max=num[i];
        if(num[i]<min) min=num[i];
    }
    printf("The average is %.2f. The max is %d and the min is %d",1.*(sum/10),max,min);

    return 0;
}
