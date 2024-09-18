#include<stdio.h>

float f(float x0 , float y0)
{
    return x0+y0;
}

void main()
{
    int n,i,j;
    float x0=0,y0=0,xn,y,h;
    printf("enter the x0 , y0 , xn , n value : \n");
    scanf("%f %f %f %d", &x0,&y0,&xn,&n);
    h=(xn-x0)/n;
    printf("the vlaue of h: %.2f\n", h);
    printf("\t X \t\t Y \t\t f(x) \t\t newY\n");
    for(i=0;i<n;i++)
    {
        printf("\t %.2f", x0);
        printf("\t\t %.2f", y0);
        printf("\t\t %.2f", f(x0,y0));
        y=y0+h*f(x0,y0);
        printf("\t\t %.2f", y);
        x0=x0+h;
        y0=y;
        printf("\n");
    }
    printf("the value of y: %.2f", y);
}