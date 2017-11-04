#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,j,k,l,gap,g,count;
    vector <int> v;
    vector <int> a;
    scanf("%i",&t);
    for(int  cas=1;cas<=t;cas++){
        scanf("%i %i",&n,&g);
        for(i=0;i<n;i++){
            scanf("%i",&j);
            v.push_back(j);
        }
        int sum=0;
        int max=-9999999;
        for(i=0;i<n;i++){
            sum=0;
            gap=g;
            for(j=i;j<n;j++){
                if(sum<=(sum+v[j]))
                    sum=sum+v[j];
                else {
                    if(gap){
                        a.push_back(v[j]);
                        gap--;
                    }
                    else if(!gap){
                        if(g){
                            sort(a.begin(),a.end());
                            if(v[j]<a[0]){
                                sum=sum + a[0];
                                a[0]=v[j];
                            }
                            else
                                sum = sum + v[j];
                        }
                        else
                            sum = sum + v[j];
                    }
                }
                if(sum>max)
                    max=sum;
            }


        }
        printf("Case %i: %i\n",cas,max);
        v.clear();
    }
    return 0;
}
