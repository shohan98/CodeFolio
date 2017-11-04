#include<bits/stdc++.h>
using namespace std;
bool check;
int m,n;
char arr[1050][1050];

void current(int pos1,int pos2){
    //printf("%d %d %d %d\n",arr[pos1][pos2]-48,pos1,pos2,check);
    if(pos1==n || check){
        check = true;
        return;
    }


    if(!(arr[pos1][pos2]-48)){
        current(pos1+1,pos2);
        if(!check && pos2+1!=m && !(arr[pos1][pos2+1]-48))
            current(pos1+1,pos2+1);
        if(!check && pos2>0 && !(arr[pos1][pos2-1]-48))
            current(pos1+1,pos2-1);

    }
    else return;
}
int main(){
    int i,j,k;
    while(scanf("%d %d",&n,&m)==2){
        for(i=0;i<n;i++){
          scanf("%s",arr[i]);
        }
        check = false;
        for(i=0;i<n;i++){
            //printf("%d %d\n",(arr[0][i]-48),check);
            if(!(arr[0][i]-48))
                current(1,i);
            if(check){
                printf("YES\n");
                break;
            }

        }
        if(!check)
            printf("NO\n");

    }
    return 0;
}
