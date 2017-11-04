#include<stdio.h>
int main(){
    int total_process,s,total_burst_time=0,f,g,i,j,ar[15],burst_time[15],process_serial[15];
    float waiting_time,turnarround;
    printf("Number of total process : ");
    scanf("%i",&total_process);
    printf("Enter arrival time and burst time\n");
    for(s=0;s<total_process;s++){
        scanf("%i %i",&ar[s],&burst_time[s]);
        total_burst_time=total_burst_time+burst_time[s];
        process_serial[s]=burst_time[s];
    }
    for(s=0,g=0;s<total_process;s++){
        f=burst_time[s];
        j=s;
        for(i=s+1;i<total_process;i++){
            if(f>burst_time[i]){
                f=burst_time[i];
                j=i;
            }
        }
        burst_time[j]=burst_time[s];
        burst_time[s]=f;
        f=ar[s];
        ar[s]=ar[j];
        ar[j]=f;
    }
    turnarround=0;
    for(s=0,waiting_time=0;s<total_burst_time;){
        for(i=0;i<total_process;i++){
            if(s>=ar[i]){
                waiting_time=waiting_time+(s-ar[i]);
                s=s+burst_time[i];
                turnarround=turnarround+(s-ar[i]);
                ar[i]=123434546;
                break;
            }
        }

    }
    printf("\n\naverage waiting time is %f\n",waiting_time/total_process);
    printf("\n\naverage turn arround time is %f\n",turnarround/total_process);

return 0;
}
