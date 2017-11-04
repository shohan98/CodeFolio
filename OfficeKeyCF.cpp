#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,K,P;
    scanf("%d %d %d",&N,&K,&P);
    int A[N];
    int B[K];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0; i<K; i++)
    {
        scanf("%d",&B[i]);
    }
    int sum = 0x7fffffff;
    int m = 0;
    for(int i=0; i<N; i++)
    {
        int time = 0;
        for(int j=0; j<K; j++)
        {
            int test = abs(A[i] - B[j]);
            int lol = abs(P-B[j]);
            int tx = (test + lol);
            int m = max(time,tx);
        }
        sum = min(sum,)
    }
    return 0;
}
