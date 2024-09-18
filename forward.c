#include<stdio.h>

void main()
{
    int i,j,n;
    float x[20],y[20][20];
    printf("how many points: ");
    scanf("%d", &n);
    printf("enter the points: \n");
    printf("---------------------------------------------\n");
    for (i=0;i<n;i++)
    {
        printf("x[%d]: ", i);
        scanf("%f", &x[i]);
        printf("y[%d]: ", i);
        scanf("%f", &y[i][0]);
    }
    for (i=n-1;i>=0;i--)
    {
        for(j=1;j<n-i;j++)
        {
            y[i][j]=y[i+1][j-1]-y[i][j-1];
        }
    }
    printf("difference table : \n");
    printf("----------------------------------------\n");
    for(i=n;i>0;i--)
    {
        printf("%.2f \t", x[n-i]);
        for(j=0;j<i;j++)
        {
            printf("%.2f \t", y[n-i][j]);
        }
        printf("\n");
    }
}