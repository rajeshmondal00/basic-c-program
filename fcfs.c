#include <stdio.h>
#include<malloc.h>

int waitingtime(int proc[], int n, int burst_time[], int wait_time[])
{
    // waiting time for first process is 0
    wait_time[0] = 0;
    for (int i = 1; i < n; i++)
        wait_time[i] = burst_time[i - 1] + wait_time[i - 1];
    return 0;
}

int turnaroundtime(int proc[], int n, int burst_time[], int wait_time[], int tat[])
{
    int i;
    for (i = 0; i < n; i++)
        tat[i] = burst_time[i] + wait_time[i];
    return 0;
}

int avgtime(int proc[], int n, int burst_time[])
{
    int wait_time[n], tat[n], total_wt = 0, total_tat = 0;
    int i;
    waitingtime(proc, n, burst_time, wait_time);
    turnaroundtime(proc, n, burst_time, wait_time, tat);
    printf("Processes  Burst   Waiting Turn around");
    for (i = 0; i < n; i++)
    {
        total_wt = total_wt + wait_time[i];
        total_tat = total_tat + tat[i];
        printf("\n %d\t  %d\t\t %d \t%d \n", i + 1, burst_time[i], wait_time[i], tat[i]);
    }
    printf("\nAverage waiting time = %.2f\n", (float)total_wt / (float)n);
    printf("Average turn around time = %.2f", (float)total_tat / (float)n);
    return 0;
}

int main()
{
    int n, i, *proc,*bt;
    printf("Enter the number of Process: ");
    scanf("%d", &n);
    // process id's
    proc = (int *)malloc(n * sizeof(int));
    printf("\nEnter the Process ID's:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &proc[i]);
    }
    // Burst time of all processes
    bt = (int*)malloc(n*sizeof(int));
    printf("\nEnter the Burst times:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&bt[i]);
    }
    avgtime(proc, n, bt);
    return 0;
}