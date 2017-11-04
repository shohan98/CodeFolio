#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n,v1,v2,t1,t2;
    scanf("%d %d %d %d %d",&n,&v1,&v2,&t1,&t2);
    i = (n*v1)+2*t1;
    j = (n*v2)+2*t2;
    if(i == j)
        printf("Friendship\n");
    else if(i<j)
        printf("First\n");
    else
        printf("Second\n");

    return 0;
}

