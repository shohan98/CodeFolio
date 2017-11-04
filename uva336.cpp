
#include<bits/stdc++.h>
using namespace std;
vector<int> v[100];
int visit[110],level[100],start,target,node=12,edge;
int bfs(){
    int a,i,key=0;
    visit[start]=1;
    queue<int> q;
    q.push(start);

    while(!q.empty()){
        a=q.front();

        q.pop();
        for(i=0;i<v[a].size();i++){
            if(!visit[v[a][i]]){
                q.push(v[a][i]);
                level[v[a][i]]=level[a]+1;
                if(v[a][i] == target){
                    key=1;
                    return level[v[a][i]];
                    break;
                }
            }
        }
        if(key)
            break;
    }

}
int main(){
    int i,j,k,ans;
    int arr[10000]

    while(scanf("%d",&edge)){

        for(i=0;i<edge;i++){
            scanf("%d %d",&j,&k);
            v[j].push_back(k);
            v[k].push_back(j);
            arr[2*i]=j;
            arr[2*i+1]=k;
        }
        while(scanf("%d%d",&start,&target)){
            for(i=0;i<node;i++)
                visit[arr[i]]=level[arr[i]]=0;
        }
    }
    return 0;
}
