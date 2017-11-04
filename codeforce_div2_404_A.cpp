#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k,ans,n,m;
    char a[20];
    scanf("%d",&n);
    getchar();
    ans=0;
    while(n--){
        scanf("%s",a);
        if(!strcmp(a,"Tetrahedron"))
            ans+=4;
        else if(!strcmp(a,"Cube"))
            ans+=6;
        else if(!strcmp(a,"Octahedron"))
            ans+=8;
        else if(!strcmp(a,"Dodecahedron"))
            ans+=12;
        else if(!strcmp(a,"Icosahedron"))
            ans+=20;
        for(i=0;a[i];i++)
            a[i]=NULL;

    }
    printf("%d\n",ans);
    return 0;
}
