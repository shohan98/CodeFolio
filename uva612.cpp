#include<stdio.h>
#include<algorithm>
using namespace std;
struct dna{
    char dna_seq[55];
    int sort_list;
};
int main(){
    int i,j,k,t,len,line,count,seq_sort[105];
    struct dna seq[110];
    scanf("%i",&t);
    while(t--){

        scanf("%i %i",&len,&line);

        for(k=0;k<line;k++)
            scanf("%s",seq[k].dna_seq);
        for(i=0;i<line;i++){
            count=0;
            for(j=0;j<len;j++)
                for(k=j+1;k<len;k++)
                    if(seq[i].dna_seq[k]<seq[i].dna_seq[j])
                        count++;
            seq[i].sort_list=count;
            seq_sort[i]=count;

        }
        sort(seq_sort,seq_sort+line);
        for(i=0;i<line;i++){
            for(j=0;j<line;j++)
                if(seq_sort[i]==seq[j].sort_list){
                    printf("%s\n",seq[j].dna_seq);
                    seq[j].sort_list=-1;
                }
        }
        if(t)
            printf("\n");
    }


    return 0;
}
