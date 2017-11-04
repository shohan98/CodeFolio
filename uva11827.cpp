#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a%b==0) return b;
    else return gcd(b,a%b);
}
int main(){
    int i,j,k,n,ans,m,num,arr[110];
    char c='a';
    char str[10000];
    scanf("%d\n",&n);
    while(n--){
        i=0;
        gets(str);
        istringstream inp(str);
		while( inp >> num ){
            arr[i]=num;
            i++;
        }
        ans=1;
        for(k=0;k<i-1;k++){
            for(j=k+1;j<i;j++){
                if((arr[j]%arr[k])==0)
                m=arr[k];
                else
                    m=gcd(arr[k],arr[j]%arr[k]);
                if(m>ans)
                    ans=m;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
