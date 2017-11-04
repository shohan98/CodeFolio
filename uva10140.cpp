#include<stdio.h>
#include<math.h>
#include<vector>

int main(){
    unsigned long long i,j,dis,L,U,min,max,pos1,pos2,pos3,pos4,limit;
    std::vector<int>arr,prime;
    for(i=0;i<=100000;i++)
            arr.push_back(0);
    limit=sqrt(100000);
    arr[0]=arr[1]=1;
    for(i=4;i<=100000;i+=2){
        arr[i]=1;
    }
    for(i=3;i<=limit;i+=2){
        if(!arr[i]){
            for(j=3;i*j<=100000;j+=2)
                arr[i*j]=1;
        }

    }


    while(scanf("%llu%llu",&L,&U),L,U){

        for(i=L,j=0;i<=U;i++){
            if(arr[i]==0){
                prime.push_back(i);
                j++;
            }
        }
        pos1=pos2=pos3=pos4=0;
        min=100000;
        max=0;
        if(j>2)
            for(i=0;i<j-1;i++){
                dis=prime[i+1]-prime[i];
                if(dis<min){
                    pos1=i;
                    pos2=i+1;
                    min=dis;
                }
                if(dis>max){
                    pos3=i;
                    pos4=i+1;
                    max=dis;
                }
            }

        if(max)
            printf("%i,%i are closest, %i,%i are most distant.\n",prime[pos1],prime[pos2],prime[pos3],prime[pos4]);
        else
            printf("There are no adjacent primes.\n");
        for(i=0;prime[i];i++)
            prime[i]=NULL;
    }
}
