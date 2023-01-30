#include<iostream>
#include<string.h>
#define N 10
//using namespace std;

/*
sample
4
1 0 10 2
2 2 5 1 
3 3 2 0
4 5 20 3

*/
int  b,min,p[N], bt[N],at[N],priority[N], ct[N], tat[N], wt[N];
float act,awt,atat;
void swap(int x,int y);
int main()
{
    int k=1,i,j,n;

    printf("Priority Scheduling.... Enter no of process:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("index[%d]: P ",i);
        scanf("%d", &p[i]);
        printf("Arrival time: ");
        scanf("%d", &at[i]);
        printf(" Burst time: ");
        scanf("%d", &bt[i]);
        printf("Priority: ");
        scanf("%d",&priority[i]);
    }
    
  //  bubbleSort(bt, n);
    int k=1;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(at[i]<at[j]){
                swap(at[i],at[j]);
                swap(bt[i],bt[j]);
                swap(priority[i],priority[j]);
                swap(p[i],p[j]);
            }     
        }
       // swap(priority[i],priority[j]);
    }
    int b1,pri1;
    
    b1 = bt[1];
    for(i = 1;i<=n;i++){
    pri1 =priority[i];
        
        printf("\n of b= %d: %d\n",i,b);
    
        for(j=2;j<=n;j++){
           // min = priority[j];
            printf("\n priority of %d: %d\n",j,min);
            if(b1>=at[j])
            {
                if(priority[j]<pri1){
                    swap(at[j],at[i]);
                    swap(bt[j],bt[i]);
                    swap(p[j],p[i]);
                    swap(priority[j],priority[i]);
                }
            }

        }
        k++;
    }
    

    
    for(i=1;i<=n;i++){
        if(at[i]==0){
            ct[i]=bt[i];    
        }
        if(at[i+1]<bt[i]){

        }
        ct[i] = ct[i-1]+ bt[i];
        act += ct[i];
    }
    act/=n;
    for(i=1;i<=n;i++){
        tat[i] = ct[i]-at[i];
        atat += tat[i];
    }
    atat/=n;

    for(i=1;i<=n;i++){
        wt[i] = tat[i]-bt[i];
        awt += wt[i];
    }
    awt/=n;

    printf("Process\tArrival-time Burst-Time  Prority\n");
    for(i=1;i<=n;i++){
        printf("%d\t  %d\t\t\t %d\t\t%d\n",p[i],at[i],bt[i],priority[i]);
    }

    printf("Process\tCompletion-Time  Turnaround-Time  Waiting-Time\n");
    for(i=1;i<=n;i++){
        printf("%d\t  %d\t\t\t %d\t\t%d\n",p[i],ct[i],tat[i],wt[i]);
    }
    
    printf("Average completion Time: %.2f\n",act);
    printf("Average Turnaround Time: %.2f\n",atat);
    printf("Average Waiting Time: %.2f\n",awt);
    return 0;
}

void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    
}
