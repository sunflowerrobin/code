#include<iostream>

#define N 10

int  at[N], ct[N], tat[N], wt[N];
float act,awt,atat;

int main()
{
    int i,n,p[N], bt[N];
    printf("Enter Process no: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("P ");
        scanf("%d", &p[i]);
        printf("Arrival time: ");
        scanf("%d",&at[i]);
        printf("Burst time: ");
        scanf("%d", &bt[i]);
    }
    
    for(i=1;i<=n;i++)
    {
        ct[i] = ct[i-1]+ bt[i];
        act += ct[i];
    }
    act/=n;

    for(i=1;i<=n;i++)
    {
        tat[i] = ct[i]-at[i];
        atat += tat[i];
    }
    atat/=n;

    for(i=1;i<=n;i++)
    {
        wt[i] = tat[i]-bt[i];
        awt += wt[i];
    }
    awt/=n;
    printf("Process\tCompletion-Time  Turnaround-Time  Waiting-Time\n");
    
    for(i=1;i<=n;i++)
    {
        printf("%d\t  %d\t\t\t %d\t\t%d\n",i,ct[i],tat[i],wt[i]);
    }
    
    printf("Average completion Time: %.2f\n",act);
    printf("Average Turnaround Time: %.2f\n",atat);
    printf("Average Waiting Time: %.2f\n",awt);
    
    return 0;
}
