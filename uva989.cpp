#include<bits/stdc++.h>
using namespace std;

char cnt,sudo[4][4],key,use[20][2];
bool check(int pos1,int pos2){
    //printf("%d %d %d\n",pos1,pos2,sudo[pos1][pos2]);

    for(int j =0;j<4;j++){
     if(sudo[pos1][j] == sudo[pos1][pos2])
            if(j!= pos2){
             //   printf("\t 1 %d %d\n",j,sudo[pos1][pos2]);
                return false;
            }
    }


    for(int j =0;j<4;j++){
     if(sudo[j][pos2] == sudo[pos1][pos2])
            if(j!= pos1){
                return false;
            }
           // printf("\t %d %d %d\n",j,sudo[j][pos2],sudo[pos1][pos2]);
    }

    return true;
}
void sudoko(int pos){

    if(pos == cnt){
            //printf("%d %d\n",pos,cnt);
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++)
                printf("%c",sudo[i][j]);
            printf("\n");

        }
        key = 1;
        return ;
    }
    for(int i =pos;i<cnt;i++){
        for(int j =1;j<=4;j++){
            sudo[use[i][0]][use[i][1]] = j+48;
            if(check(use[i][0],use[i][1]))
                sudoko(i+1);
            if(key)
                break;
        }
    }
}
int main(){
    int i,j,k,test;
    scanf("%d",&test);
    for(k=1;k<=test;k++){
        for(i=0,cnt = 0;i<4;i++){
            scanf("%s",sudo[i]);
            for(j=0;j<4;j++){
                if(sudo[i][j] == '*'){
                    use[cnt][0] = i;
                    use[cnt][1] = j;
                    cnt++;
                }

            }

        }

        printf("Case #%d:\n",k);
        key=0;
        sudoko(0);

    }
    return 0;
}
