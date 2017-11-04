#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k=0,n,m,flag=1,arr[10009];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        arr[i] = 8;
    }
    for(i=0;i<m;i++){
        scanf("%d",&flag);
        if(k < n){
            for(j=k;j<n && flag>0;j++){
                if(arr[j]> flag){
                    int temp = arr[j];
                    arr[j]-=flag;
                    if(flag&1)
                        arr[j]--;
                    flag-=temp;
                    if(arr[j]<=0)
                        k++;

                }
                else{
                    flag-=arr[j];
                    arr[j] = 0;
                    k++;
                }
            }
            if(k == n){
                if(flag>0 || i!=m-1)
                    k+=n;


            }
        }
    }
    if(k>n)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}

