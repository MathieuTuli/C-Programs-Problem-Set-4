#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int find_index(int num,int j[])
{
    int i;
    for(i=0;i<100;i++)
    {
        if(j[i]==num) return i;
    }
    return -1;
}

int main()
{
    int j[100],i,ANS,x,r;
    srand((unsigned)time(NULL));

    for (i=0;i<100;i++)
    {
        r=rand()%100+1;
        j[i]=r;
    }

    printf("Enter a number to search between 1 and 100: ");
    scanf("%d",&x);

    ANS=find_index(x,j);

    if (ANS<0) printf("That number is not in the array");
    else printf("That number is in the %d position in the matrix",ANS);

    return 0;
}
