#include<bits/stdc++.h>
using namespace std;
vector<int> v[100];
int visit[110],level[100],start,target,node,edge;
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
    printf("Node & edge = ");
    scanf("%d%d",&node,&edge);
    printf("\nStart node to Target Node = ");
    scanf("%d%d",&start,&target);
    level[start]=0;
    printf("Edges are : \n");
    for(i=0;i<edge;i++){
        scanf("%d %d",&j,&k);
        v[j].push_back(k);
        v[k].push_back(j);
    }
    for(i=0;i<node;i++)
        visit[i]=level[i]=0;
    printf("level = %d\n",bfs());
    return 0;
}
