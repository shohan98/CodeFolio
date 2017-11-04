#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k,r,n;
    scanf("%i %i",&k,&r);
    i=k%10;
    if(!i)
        printf("1\n");
    else{
        for(j=1;j<10;j++){
            if(r == ((i*j)%10)){
                printf("%i\n",j);
                break;
            }
            else if(((i*j)%10) == 0){
                printf("%i\n",j);
                break;
            }
        }
    }
    return 0;
}

