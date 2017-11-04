#include<bits/stdc++.h>

using namespace std;

int n,m,x;
int a[100007],b[100007];

int abs(int a)
{
    return a>0?a:-a;
}

void maxs(int &a,int b)
{
    if(a<b)a=b;
}

void mins(int &a,int b)
{
    if(a>b)a=b;
}


int main()
{
    scanf("%d%d%d",&n,&m,&x);

    for(int i=1; i<=n; ++i)scanf("%d",a+i);
    for(int i=1; i<=m; ++i)scanf("%d",b+i);

    sort(a+1,a+n+1);
    sort(b+1,b+m+1);

    int ans=0x7fffffff;

    for(int L=1,R=n; R<=m; ++L,++R)
    {
        int mx=0;
        for(int i=1,j=L; i<=n; ++i,++j)maxs(mx,abs(a[i]-b[j])+abs(b[j]-x));
        mins(ans,mx);
    }

    printf("%d\n",ans);
    return 0;
}
