#include<stdio.h>
int main(){
    long long int a,s,d,f,g,h,i,e,height[50009],q[25025];
    scanf("%lli",&a);
    for(s=0;s<a;s++)
        scanf("%lli",&height[s]);
    scanf("%lli",&d);
    for(s=0;s<d;s++)
        scanf("%lli",&q[s]);

    for(s=0;s<d;s++){
        for(f=0;f<a;f++){
            if(height[f]>=q[s])
                break;
        }
        if(f==0 &&  height[f]!=q[s])
            printf("X %lli\n",height[f]);
        else if(f==a &&  height[f-1]!=q[s])
            printf("%lli X\n",height[f-1]);
        else if(f==a &&  height[f-1]==q[s])
            printf("%lli X\n",height[f-2]);
        else if(f==a-1 &&  height[f]!=q[s])
            printf("%lli %lli\n",height[f-1],height[f]);
        else if(f==a-1 &&  height[f]==q[s] && f+1!=a)
            printf("%lli X\n",height[f-1]);
        else if(f==0 &&  height[f]==q[s] && f+1!=a)
            printf("X %lli\n",height[f+1]);
        else if(f==0 &&  height[f]==q[s] && f+1==a)
            printf("X X\n");
        else if(height[f]==q[s])
            printf("%lli %lli\n",height[f-1],height[f+1]);
        else
            printf("%lli %lli\n",height[f-1],height[f]);

    }
    return 0;
}
