#include<bits/stdc++.h>
using namespace std;

int n,q[20],column[40],diagonal_plus[40],diagonal_minus[40];

int nqueen(int position){
    if(position==n){
        for(int i=0;i<n;i++){
            printf("%d -- %d\n",i+1,q[i]+1);
        }
        printf("\n\n");
    }
    for(int i=0;i<n;i++){
        if(column[i] || diagonal_plus[i+position] || diagonal_minus[n+i-position] )
            continue;

        q[position]=i;
        column[i]=1;
        diagonal_plus[i+position]=1;
        diagonal_minus[n+i-position]=1;
        nqueen(position+1);

        column[i]=0;
        diagonal_plus[i+position]=0;
        diagonal_minus[n+i-position]=0;
    }
}
int main(){
    while(1){
        scanf("%d",&n);
        for(int i=0;i<40;i++){
            column[i]=0;
            diagonal_plus[i]=0;
            diagonal_minus[i]=0;
        }
        nqueen(0);
    }
    return 0;
}
