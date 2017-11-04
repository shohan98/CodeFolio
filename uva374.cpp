#include<bits/stdc++.h>
using namespace std;

long long N,p,mod,arr[10000];

#define long long long long
long long M;

long long F(long long P){
	if(P==0) return 1;
	if(P%2==0)
	{
		long long ret=F(P/2);
		return ((ret%M)*(ret%M))%M;
	}
	else return ((N%M)*(F(P-1)%M))%M;

}
void Main(){
    int i,j,k;
    while(scanf("%lld %lld %lld",&N,&p,&M) == 3){

        printf("%lld\n",F(p));
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    clock_t t;
    t = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    Main();
    #ifndef ONLINE_JUDGE
    t = clock() - t;
    fprintf(stderr, "%lf", t/CLOCKS_PER_SEC);
    #endif
    return 0;
}
