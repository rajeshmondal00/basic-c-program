#include<stdio.h>
#include<math.h>

int main()
{
    int n,k;
    printf("how many number you want to add: ");
    scanf("%d",&n);
    float x[n],y[n];
    for (int i=0;i<n;i++)
    {
        printf("enter the x of number %d : ",i+1);
        scanf("%f",&x[i]);
        printf("enter the y of number %d : ",i+1);
        scanf("%f",&y[i]);
    }
    printf("enter the k value: ");
    scanf("%d",&k);
    float arr1[k],arr2[k];
    printf("the values are: \n");
    for(int i=0;i<k;i++)
    {
        arr1[i]=x[i];
        arr2[i]=y[i];
    }
    int b=0,low,result[n-k];
    float value[n],val,tem;
    for(int i=k;i<n;i++)
    {
        int a=0,c;
        c=c+a;
        for(int j=0;j<k;j++) //calculation
        {
            val=pow((x[i]-arr1[j]),2) + pow((y[i]-arr2[j]),2);
            value[i-k+j]=sqrt(val);
            printf("\n%.2f\n",value[i-k+j]);
        }
        int j=i-k+1;   
        low=i-c*k;
        printf("value of a: %d\n",a);
        printf("low values: %d\n",low);
        tem=value[i-k];
        printf("\nvalue1: %.2f\n",tem);
        while(j<i) //lowest value search
        {
            if(value[j]<tem)
            {
                tem=value[j];
                low=j-c*k;
                j++;
            }
            else
            {
                j++;
            }
            
        }
        c=a;
        printf("low values: %d\n",low);
        printf("value2: %.2f\n",tem);
        result[b]=low;
        printf("result: %d\n",result[b]);
        b++;
        arr1[low]=(arr1[low]+x[i])/2;
        printf("the arr1 value : %.2f\n",arr1[low]);
        arr2[low]=(arr2[low]+y[i])/2;
        printf("the arr2 value : %.2f\n",arr2[low]);
    }
    printf("the values are: \n");
    for(int a=0;a<n-k;a++)
    {
        printf("%d\t",result[a]+1);
    }
}