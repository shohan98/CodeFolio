#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,l,m,n;
    vector <int> arr;
    scanf("%d",&n);
   int sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&j);
        
        sum+=j;
    }
    if(j&1)
        printf("First\n");
        
    else
        printf("Second\n");
    return 0;
}