#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long a,c,ans,i,j,yo,k,ii,m,n,arr[100][100];
    scanf("%llu %llu",&m,&n);
    ans=0;
    for(i=0;i<m;i++){
        for(yo=0,j=0,k=0;yo<n;yo++){
            scanf("%llu",&arr[i][yo]);
            if(arr[i][yo])
                j++;
            else
                k++;


        }
        c=0;
        if(j>=1)
            for(ii=1,c=1;ii<=j;ii++){
                c*=2;

            }
        if(c)
            c--;
        ans+=c;
        //printf("%llu %llu\n",c,j);
        c=0;
        if(k>=1)
            for(ii=1,c=1;ii<=k;ii++)
                c*=2;
        if(c)
            c--;
        ans+=c;


    }
    for(i=0;i<n;i++){
        for(yo=0,j=0,k=0;yo<m;yo++){
            if(arr[yo][i])
                j++;
            else
                k++;

        }
        c=0;
        if(j>=1)
            for(ii=1,c=1;ii<=j;ii++){
                c*=2;

            }
        if(c)
            c--;
        ans+=c;
        //printf("%llu %llu\n",c,j);
        c=0;
        if(k>=1)
            for(ii=1,c=1;ii<=k;ii++)
                c*=2;
        if(c)
            c--;
        ans+=c;


    }
    ans = ans-(n*m);

    printf("%llu\n",ans);
    return 0;
}
