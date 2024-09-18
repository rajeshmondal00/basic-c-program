#include<stdio.h>
#include<malloc.h>

int waiting(int pro[], int n, int bt[],int waiting_time[])
{
    int i;
    waiting_time[0]=0;
    for(i=1;i<n;i++)
    {
       waiting_time[i]=waiting_time[i-1]+bt[i-1];
    }
    return 0;
}
int turnarround(int pro[],int n, int bt[],int waiting_time[],int tarn[])
{
    int i;
    for(i=0;i<n;i++)
    {
        tarn[i]=bt[i]+waiting_time[i];
    }
    return 0;
}
int avgtime(int pro[], int n, int bt[])
{   int waiting_time[n],i,tarn[n],avgwait=0,avgtat=0;
    waiting(pro,n,bt,waiting_time);
    turnarround(pro,n,bt,waiting_time,tarn);
    printf("\n Process  Burst  Waiting   turn arround \n");
    for(i=0;i<n;i++)
    {   avgwait=avgwait+waiting_time[i];
        avgtat=avgtat+tarn[i];
        printf("%d\t%d\t\t%d\t%d\n",pro[i],bt[i],waiting_time[i],tarn[i]);
    }
    printf("\n Avarage waiting time: %.2f", (float)avgwait/(float)n);
    printf("\n Avarage tarn arround time: %.2f", (float)avgtat/(float)n);
}
void main()
{
    int n,i,*pro,*bt;
    printf("how many process: ");
    scanf("%d", &n);
    pro = (int*)malloc(sizeof(int) * n);
    printf("enter the process ID: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &pro[i]);
    }
    printf("\n enter burst time: \n");
    bt=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d", &bt[i]);
    }
    avgtime(pro,n,bt);
}