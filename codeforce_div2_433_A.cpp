#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,m,n,arr[100000];
    vector <int> v;
    //while(1){
        scanf("%d",&n);
        if(n == 3)
            printf("1 2\n");
        else if(n == 4)
            printf("1 3\n");
         else{
            for(i=n/2;i>1;i--){
                for(j=2;j<=i/2;j++)
                    if(i%j==0 && (n-i)%j==0)
                        break;
                if(j>i/2)
                    break;
            }

            if(i<=1)
                printf("1 %d\n",n-1);
            else
                printf("%d %d\n",i,n-i);

         }
    //}
    //printf("hello world\n");
    return 0;

}

