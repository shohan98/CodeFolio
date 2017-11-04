#include<bits/stdc++.h>
using namespace std;

int c=0,n,q[20],column[40],diagonal_plus[40],diagonal_minus[40],mark[20][20];
vector<string> v;
string s;

int nqueen(int position){
    if(position==n){
         printf("%d %d %d %d\n",c,position,q[position-1],n);
        c++;
    }
    for(int i=0;i<n;i++){

        if(column[i] || diagonal_plus[i+position] || diagonal_minus[n+i-position] || mark[position][i])
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
    int T=1;
    char arr[20][20];
       //freopen("uva11195.txt","w",stdout);
       while(scanf("%d",&n),n){
        c=0;
        for(int i=0;i<40;i++){
            q[i]=0;
            column[i]=0;
            diagonal_plus[i]=0;
            diagonal_minus[i]=0;
        }

        getchar();
        for(int i=0;i<n;i++){
            gets(arr[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j] == '*'){
                    mark[i][j]=1;
                    //printf("%d %d\n",i,j);
                }

            }
        }
        nqueen(0);
        printf("Case %d: %d\n",T,c);
        T++;
    }
    return 0;
}
