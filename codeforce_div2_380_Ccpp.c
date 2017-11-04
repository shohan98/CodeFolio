#include<stdio.h>
int main(){
    long int i,j,k,n,count,cas=0,arr[500000],arr2[500000];
    while(scanf("%li",&n),n){
            count=0;
        if(n>500000){
            for(i=0;i<500000;i++){
                scanf("%li",&arr[i]);
            }
            for(i=0;i<n-500000;i++){
                scanf("%li",&arr2[i]);
            }
            for(i=1;i<499999;i++){
                if(arr[i]>arr[i-1])
                    if(arr[i]>arr[i+1])
                        if(arr[i]>0)
                            count++;
            }
            if(arr[499999]>arr[499998])
                    if(arr[499999]>arr2[0])
                        if(arr[499999]>0)
                            count++;

            if(arr2[0]>arr2[1])
                    if(arr[499999]<arr2[0])
                        if(arr2[0]>0)
                            count++;
            for(i=1;i<n-500000-1;i++){
                if(arr2[i]>arr2[i-1])
                    if(arr2[i]>arr2[i+1])
                        if(arr2[i]>0)
                            count++;
            }
        }
        else{
            for(i=0;i<n;i++){
                scanf("%li",&arr[i]);
            }
            for(i=1;i<n-1;i++){
                if(arr[i]>arr[i-1])
                    if(arr[i]>arr[i+1])
                        if(arr[i]>0)
                            count++;
            }
        }
        cas++;
        printf("Case %li: %li\n",cas,count);

    }
    return 0;
}
