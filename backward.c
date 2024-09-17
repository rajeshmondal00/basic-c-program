// newton backward interpolation
#include<stdio.h>

void main()
{
    int i,j,n,a;
    int x[20],y[20][20];
    printf("how many point: ");
    scanf("%d", &a);
    printf("enter the points: \n");
    printf("-----------------------------\n");
    for(i=0;i<a;i++)
    {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
        printf("y[%d]: ", i);
        scanf("%d", &y[i][0]);
    }
    for(j=1;j<a;j++)
    {
        for(i=0;i<a-j;i++)
        {
            y[i][j]=y[i+1][j-1]-y[i][j-1];
        }
    }

    printf("\n difference table: \n"); //difference table
    printf("-----------------------------------------------------------\n");
    for(i=0;i<a;i++)
    {
        printf("%d \t", x[i]);
        for(j=0;j<=i;j++)
        {
            printf("%d \t", y[i-j][j]);
        }
        printf("\n");
    }
}