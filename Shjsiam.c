#include<stdio.h>
int main ()
{
    int T,st_time=0,tot_wt_time=0,ar_time[100],br_time[100],wt_time,tot_br_time=0,t_ar_time,p,i=0,q,tot_t_ar_time=0,keep;
    float avg_tot_wt_time,avg_t_ar_time;
    scanf("%d",&T);
    q=T;
    while(T--)
    {
        scanf("%d %d",&ar_time[i],&br_time[i]);
        i++;
        p=i;
    }
    for(i=1;i<p;i++)
    {
        if(br_time[i] > br_time[i+1])
        {
            keep=br_time[i];
            br_time[i]=br_time[i+1];
            br_time[i+1]=keep;
        }

    }

    for(i=0;i<p;i++)
    {
        wt_time=st_time-ar_time[i];
        tot_wt_time+=wt_time;
        st_time+=br_time[i];

        tot_br_time+=br_time[i];
        t_ar_time=tot_br_time-ar_time[i];
        tot_t_ar_time+=t_ar_time;
    }
    avg_tot_wt_time=(float)tot_wt_time/q;
    avg_t_ar_time=(float)tot_t_ar_time/q;

    printf("%f %f",avg_tot_wt_time,avg_t_ar_time);

    return 0;
}
