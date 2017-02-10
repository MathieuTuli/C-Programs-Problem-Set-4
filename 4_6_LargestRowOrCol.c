#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 4
#define COLS 4

int largest(int A[][COLS]);

int main()
{
    int A[ROWS][COLS],i,j,r,total;
    srand((unsigned)time(NULL));

    for (i=0;i<ROWS;i++)
    {
        for (j=0;j<COLS;j++)
        {
            r=rand()%100+1;
            A[i][j]=r;
            printf("%d ",A[i][j]);
        }
        printf("\n");

    }
    total=largest(A);
    printf("The largest sum is %d",total);

    return 1;
}

int largest(int A[][COLS])
{
    int sum=0,i,j,total=0;

    for (i=0;i<ROWS;i++)
    {
        sum=0;
        for(j=0;j<COLS;j++)
        {
            sum+=A[i][j];
        }
        if (sum>total) total=sum;
    }
    return total;
}
