#include<stdio.h>
#include<string.h>
struct frnd{
    char name[23];
    int amount;
};

int main(){
    int i,j,k,n,nl=0,money,member;
    char nam[23];
    struct frnd person[25];

    while(scanf("%i",&n)!=EOF){
             if(nl==1)
            printf("\n");

        nl=1;
        for(i=0;i<n;i++){
            scanf("%s",person[i].name);
            person[i].amount=0;
        }

        for(i=0;i<n;i++){
            scanf("%s",nam);
            scanf("%i %i",&money,&member);
            for(j=0;strcmp(person[j].name,nam);j++);

            if(member>0){
                person[j].amount-=(money-(money%member));
                for(j=0;j<member;j++){
                    scanf("%s",nam);
                    for(k=0;strcmp(person[k].name,nam);k++);

                    person[k].amount+=(money/member);
                }

            }
        }


        for(i=0;i<n;i++){
            printf("%s %i\n",person[i].name,person[i].amount);
        }


    }
    return 0;
}
