#include<bits/stdc++.h>
using namespace std;

int a,b,c=0,n=8,q[20],column[40],diagonal_plus[40],diagonal_minus[40],mark[20][20],ans[8];

void nqueen(int position){
    if(position==n){
        c++;
        for(int i=0;i<8;i++){
            ans[q[i]]=i+1;
        }
        if(c<10)
            printf(" ");
        printf("%d      ",c);
        for(int i=0;i<7;i++)
            printf("%d ",ans[i]);
        printf("%d\n",ans[7]);
        return;
       }
    for(int i=0;i<n;i++){
        if(position==a-1){
            position++;
            continue;
        }
        else if( column[i] || (i==b-1) || diagonal_plus[i+position] || i+position==a+b-2 || diagonal_minus[n+i-position] || ((i-position)==(b-a)))
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
    int T;
    char arr[20][20];
        scanf("%d",&T);
       while(T--){
        c=0;
        scanf("%d%d",&a,&b);
        for(int i=0;i<40;i++){
            column[i]=0;
            diagonal_plus[i]=0;
            diagonal_minus[i]=0;
        }
        q[a-1]=b-1;
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        nqueen(0);
    }
    return 0;
}
