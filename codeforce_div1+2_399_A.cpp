#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,m,n;
    vector <int> arr;
    scanf("%i",&n);
    for(i=0;i<n;i++){
        scanf("%d",&j);
        arr.push_back(j);
    }

    sort(arr.begin(),arr.end());
    for(i=1;i<n;i++){

        if(arr[0] != arr[i])
            break;
    }
    for(j=n-2;j>=0;j--){

        if(arr[n-1] != arr[j])
            break;
    }
    if(n<=2)
        printf("0\n");
    else if(i==n)
        printf("0\n");
    else if(i==(j+1))
        printf("0\n");
    else
        printf("%d\n",j-i+1);
    return 0;
}
