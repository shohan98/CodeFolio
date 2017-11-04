#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int a,s,d,f,g,i,sum,ans=0,sc[1010];
    scanf("%i",&a);
    scanf("%i",&s);
    scanf("%i",&d);
    for(i=0;i<a;i++){
        scanf("%i",&sc[i]);
    }
    sort(sc,sc+a);
    sum=0;
    for(i=a-1;i>=0;i--){
        sum=sum+sc[i];
        ans++;
        if(sum>=s*d)
            break;
    }

    printf("%i\n",ans);
    return 0;

}
