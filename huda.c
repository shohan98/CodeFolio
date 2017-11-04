#include<iostream>
#include<cstdio>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
#include<deque>
#include<iterator>
#include<assert.h>
#include<bitset>
#include<climits>
#include<ctime>
#include<complex>

using namespace std;

#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define PB push_back
#define PI acos(-1.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define READ freopen("input.txt", "r", stdin)
#define WRITE freopen("output.txt", "w", stdout)
#define LL long long

#define S(a) scanf("%d",&a)
#define S2(a,b) scanf("%d%d",&a,&b)
#define KS printf("Case %d: ",kk++)

#define MOD 1000000007
#define MX 100010

int main()
{
    double h,u,d,f;
    while(cin>>h>>u>>d>>f && h)
    {
        f=f*u/100;
        double ht=0.0;
        int cnt=0;
        while(1)
        {
            cnt++;
            if(u>0) ht+=u;
            u-=f;

            if(ht>h) break;
            ht-=d;
            if(ht<0) break;

        }
        if(ht>=0) cout<<"success on day "<<cnt<<endl;
        else cout<<"failure on day "<<cnt<<endl;
    }
    return 0;
}
