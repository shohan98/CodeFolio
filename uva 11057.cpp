#include<bits/stdc++.h>

using namespace std;

int main()
{
    int kase;
    int lol = 0;
    while(scanf("%d",&kase) != EOF)
    {
        int arr[kase];
        int price;
        for(int i=0; i<kase; i++)scanf("%d",&arr[i]);
        int money;
        scanf("%d",&money);
        int dif = 0;
//        sort(arr,arr+kase);
        int val1 = 0;
        int val2 = 0;
        for(int i=0; i<kase; i++)
        {
            for(int j=i+1; j<kase; j++)
            {
                int cost = arr[i] + arr[j];
                int dis = abs(arr[i] - arr[j]);
                if(cost == money && dif <= dis)
                {
                    val1 = arr[i];
                    val2 = arr[j];
                }
                if(dis == 0)break;
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",val1,val2);
    }
    return 0;
}
