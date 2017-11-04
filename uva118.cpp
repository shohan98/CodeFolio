#include<bits/stdc++.h>
int main(){
    int i,j,k,key,m,n,dir,x,y;
    char str[110],d,s[6]={"NESW"};
    scanf("%d%d",&m,&n);
    if(d == 'N')
        dir=1;
    else if(d == 'E')
        dir=2;
    else if(d == 'S')
        dir=3;
    else if(d == 'W')
        dir=4;

    while(scanf("%d%d %c ",&x,&y,&d)){
        if(d == 'N')
            dir=1;
        else if(d == 'E')
            dir=2;
        else if(d == 'S')
            dir=3;
        else if(d == 'W')
            dir=4;
        j=x;
        k=y;

        scanf("%s",str);

        key=0;
        for(i=0;str[i];i++){
            if(str[i] == 'R'){
                dir++;
                if(dir>4)
                    dir=1;
            }
            else if(str[i] == 'L'){
                dir--;
                if(!dir)
                    dir=4;
            }
            else if(str[i] == 'F'){
                if(dir == 1)
                    y++;
                else if(dir == 2)
                    x++;
                else if(dir == 3)
                    y--;
                else if(dir == 4)
                    x--;

                if(x>m){
                    key=1;
                    x--;
                    break;
                }
                else if(y>n){
                    key=1;
                    y--;
                    break;
                }
                if(y<0){
                    key=1;
                    y++;
                    break;
                }
                else if(x<0){
                    key=1;
                    x++;
                    break;
                }


            }

        }
        printf("%d %d %c",x,y,s[dir-1]);
        if(key)
            printf(" LOST\n");
        else
            printf("\n");

    }

    return 0;
}
