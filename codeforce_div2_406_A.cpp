#include<bits/stdc++.h>
using namespace std;
int Gcd(int a,int b){
    if(a%b == 0)
        return b;
    return(b,b%a);
}
int main(){
    long long int gcd,lcm,cnt,mod,a,b,c,d,i,j,k,key,x,y;
    double e,r;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    key=0;
    k = (b-a-d+c);
    gcd = Gcd(a,c);
    lcm = (a*c)/gcd;
    if(a == c){
        printf("%d\n",a);
        key=1;
    }
    else if((lcm/a)*b == (lcm/c)*d){
        printf("-1\n");
        key=1;
    }


    for(x=1;!key;x++){
        y=(k+x*a)/c;
        if(k == (y*c - x*a))
            break;

    }
    if(!key)
        printf("%lld\n",(b+(x-1)*a));
    return 0;
}

