#include<bits/stdc++.h>
		using namespace std;
		int main(){
			//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
			int i,j,n,arr[220],ans[220];
			vector <int> v;
			vector <int> prime;
			for(i=1;i<=100;i++)
				v.push_back(0);
			for(i=4;i<=100;i+=2)
				v[i]=1;
			for(i=3;i<=10;i+=2){
				if(!v[i])
				for(j=i*i;j<=100;j+=(2*i)){
					v[j]=1;
				}
			}
			prime.push_back(2);
			for(i=3;i<=100;i+=2)
				if(!v[i])
					prime.push_back(i);
			while(scanf("%d",&n),n){
				for(i=1;i<=n;i++){
					arr[i]=i;
				}
				for(i=0;prime[i]<=n;i++){
					int c=0;

					for(j=prime[i];j<=n;j++){

						while((arr[j]%prime[i])==0){

							arr[j]/=prime[i];
							c++;
						}
					}
					ans[i]=c;
					if(prime[i]==97)
					break;

				}

				printf("%3d! =",n);
				for(i=0;prime[i]<=n;i++){
					if((i+1)==16) printf("\n      ");
					printf("%3d",ans[i]);

					if(prime[i]==97)
					break;
				}
				puts("");
			}
			return 0;
		}
