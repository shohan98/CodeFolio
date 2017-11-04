#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,b,n,t,a=0,s=0,d=0;
    vector<int> p,a1,a2,a3;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&j);
        p.push_back(j);
    }
    for(i=0;i<n;i++){
        scanf("%d",&j);
        if(j==1)
            a1.push_back(p[i]);
        else if(j==2)
            a2.push_back(p[i]);
        else
            a3.push_back(p[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&j);
        if(j==1)
            a1.push_back(p[i]);
        else if(j==2)
            a2.push_back(p[i]);
        else
            a3.push_back(p[i]);
    }
    scanf("%d",&b);
    sort(a1.begin(),a1.end());
    sort(a2.begin(),a2.end());
    sort(a3.begin(),a3.end());
    for(i=0;i<b-1;i++){
        scanf("%d",&j);
        if(j==1){
            if(a1.size()!=a){
                printf("%d ",a1[a]);
                a++;
                }
            else printf("-1 ");
        }
        if(j==2){
            printf("%d %d ",a2.size(),s);
            if(a2.size()!=s){
                printf("%d ",a2[s]);
                s++;
                }
            else printf("-1 ");
        }
        if(j==3){
            if(a3.size()!=d){
                printf("%d ",a1[d]);
                d++;
                }
            else printf("-1 ");
        }
    }
    scanf("%d",&j);
        if(j==1){
            if(a1.size()!=a){
                printf("%d\n",a1[a]);
                a++;
            }
            else printf("-1\n");
        }
        if(j==2){
            if(a2.size()!=s){
                printf("%d\n",a2[s]);
                s++;
                }
            else printf("-1\n");
        }
        if(j==3){
            if(a3.size()!=d){
                printf("%d\n",a1[d]);
                d++;
                }
            else printf("-1\n");
        }
    return 0;
}

