#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,hour,StartHour,StartMinute,StartSec,minute,sec;
    double speed,TimeDistance,LastTime;
    double LastDistance,distance;
    char time[20];
    gets(time);
    StartHour = (time[0]-48)*10+time[1]-48;
    StartMinute = (time[3]-48)*10+time[4]-48;
    StartSec = (time[6]-48)*10+time[7]-48;
    speed=0.0;

    for(i=strlen(time)-1,j=1;i>8;i--,j*=10)
        speed+=(time[i]-48)*j;

    LastDistance=0.0;
    LastTime = StartHour*3600.0 + StartMinute*60.0 + StartSec;
    //printf("%s %d %d %d %d %.2f km\n",time,StartHour,StartMinute,StartSec,LastTime,LastDistance);

    while(gets(time)){

        if(strlen(time)>9){

            StartHour = (time[0]-48)*10+time[1]-48;
            StartMinute = (time[3]-48)*10+time[4]-48;
            StartSec = (time[6]-48)*10+time[7]-48;
            TimeDistance = (StartHour*3600 + StartMinute*60 + StartSec)-LastTime;
            distance =  LastDistance+(TimeDistance*speed*1.0)/3600.0;
            speed=0;

            for(i=strlen(time)-1,j=1;i>8;i--,j*=10)
                speed+=(time[i]-48)*j;

            LastTime = StartHour*3600 + StartMinute*60 + StartSec;
            LastDistance = distance;
            //printf("%s %d %d %d %d %.2f km\n",time,StartHour,StartMinute,StartSec,LastTime,LastDistance);
        }
        else{
            hour = (time[0]-48)*10+time[1]-48;
            minute = (time[3]-48)*10+time[4]-48;
            sec = (time[6]-48)*10+time[7]-48;
            TimeDistance = (hour*3600*1.0 + minute*60 + sec)-LastTime;
            distance =  LastDistance+(TimeDistance*speed*1.0)/3600.0;
            printf("%s %.2lf km\n",time,distance);
        }
    }
    return 0;
}
