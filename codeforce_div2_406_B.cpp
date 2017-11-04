#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,i,j,k,key,x,y;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    key=0;
    k = (b-a-d+c);
    if((b+a)&1)
        if((c+d)%2==0){
            printf("-1\n");
            key=1;
        }
        else
            if((c+d)&1){
                printf("-1\n");
                key=1;
        }
    for(x=2;!key;x++){
        y=(k+x*a)/c;
        if(k == (y*c - x*a))
            break;
    }
    if(!key)
        printf("%d\n",(b+(x-1)*a));
    return 0;
}

