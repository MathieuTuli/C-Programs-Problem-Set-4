#include <stdio.h>

int pows(int a,int b)
{
    int result=1,i;
    for (i=1;i<=b;i++)
    {
        result*=a;
    }
    return result;
}

int main()
{
    int i,j,a,orig,count=0,ugh;

    printf("Enter an integer: ");
    scanf("%d",&orig);
    a=orig;
    while(a!=0)
    {
        a/=10;
        count++;
    }
    int num[count];
    for (i=count;i>=1;i--)
    {
        ugh=pows(10,i-1);
        num[i]=(orig/ugh);
        orig=orig%ugh;
    }
    printf("\nDigit---------Amount\n");

    for(j=0;j<=9;j++)
    {
        a=0;
        for(i=0;i<=count;i++)
        {
            if (num[i]==j)
                a++;
        }
        printf("    %d---------%d\n",j,a);
    }
    return 0;
}
