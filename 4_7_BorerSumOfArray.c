#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5


int add(int A[][SIZE])
{
    int i,j,sum=0;
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            if (i==0 || i==SIZE-1) sum+=A[i][j];
            else if (j==0 || j==SIZE-1)
             {
                sum+=A[i][j];
            }
        }
    }
    return sum;
}

int main()

{
    int A[SIZE][SIZE],i,j,r;
    srand((unsigned)time(NULL));

    for (i=0;i<SIZE;i++)
    {
        for (j=0;j<SIZE;j++)
        {
            r=rand()%10;
            A[i][j]=r;
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    int sum=add(A);
    printf("The sum of the outside of the array is %d",sum);
    return 0;
}
