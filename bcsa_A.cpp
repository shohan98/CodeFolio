#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,j,k,count;
    vector <int> v;
    scanf("%i",&t);
    while(t--){
        scanf("%i",&n);
        for(i=0;i<n;i++){
            scanf("%i",&j);
            v.push_back(j);
        }
        if(count != (n-1)){
            count=0;
            int ind=0;
            for(i=1;i<n-1;i++){
                if(v[i]>v[i-1]){
                    if(v[i]>v[i+1]){
                        if(ind)
                            if(count<i-ind-1)
                                count = i-ind-1;
                        ind = i;

                    }
                }
            }
            if(count){
                printf("%d\n",count);
                v.clear();
                continue;
            }
        }
        count=0;
        for(i=1;i<n;i++){
            if(v[i]>=v[i-1]){
                count++;
            }
            else break;
        }
        if(count == n-1){
            if(v[0] != v[n-1])
                printf("allGoodDays\n");
            else count--;
        }
        else{
            count=0;
            for(i=1;i<n;i++){
                if(v[i]<=v[i-1]){
                    count++;
                }
                else break;
            }
            if(count == n-1){
                printf("allBadDays\n");
            }
        }
        if(count != n-1){
            count=0;
            for(i=1;i<n;i++){
                if(v[i]==v[i-1])
                    count++;
                else break;

            }
            if(count==(n-1))
                printf("neutral\n");
        }

        if(count!=n-1)
                printf("none\n");
        v.clear();
    }
    return 0;
}
