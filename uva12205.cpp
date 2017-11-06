#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numOfCall,numOfInterval,id1,id2,call_start,call_end,int_start,int_end;
    int start_call[10000];
    int end_call[10000];
    int count=0;


    while(1){
        scanf("%i %i",&numOfCall,&numOfInterval);
        if(numOfCall==0&&numOfInterval==0){break;}

    for(int i=0;i<numOfCall;i++){
        scanf("%i %i %i %i",&id1,&id2,&call_start,&call_end);
        start_call[i] = call_start;
        end_call[i] = call_start+call_end;
    }

//    for(int j=0;j<numOfCall;j++){
//        printf("%i ",start_call[j]);
//        printf("\n");
//        printf("%i ",end_call[j]);
//    }

 for(int j=0;j<numOfInterval;j++){
        scanf("%i %i",&int_start,&int_end);
        int_end = int_start+int_end;
        for(int k=0;k<numOfCall;k++){



            if((int_start>start_call[k] && int_start<end_call[k]) || (int_end<end_call[k] && int_end>start_call[k])){
                count++;
            }
            else if((int_start<=start_call[k]  && int_end>=end_call[k]))
                count++;
        }
        printf("%i\n",count);
        count=0;

    }


    }
}
