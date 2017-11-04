#include<bits/stdc++.h>

using namespace std;

int heights[25001];

void x_search(int s,int h) // Executing Binary Search algorithm
{
    int l = 0;
    //long mid = (l+h)/2;
    while(l < h)
    {
        long mid = (l+h)/2; //Middle values
        //cout<<l<<" "<<h<<endl;
        if(abs(l-h) == 1 && (s != heights[mid]) && (s > heights[l]) && (s < heights[h]))
        {
            printf("%d %d\n",heights[l],heights[h]);
            break;
        }

        if(heights[mid] == s)
        {
            printf("%d %d\n",heights[mid-1],heights[mid+1]);
            //cout<<l<<" "<<h<<endl;
            break;
        }
        else if(s > heights[mid])
        {
            l = mid;
        }
        else if(s < heights[mid])
        {
            h = mid;
        }

    }

    //cout<<s<<" "<<h<<endl;

}


int main()
{
    int lh,lk,i;
    scanf("%d",&lh);
    memset(heights,0,sizeof(heights)); //  Initially all values at array are zero.

    for(i=0; i<lh; i++)
    {
        scanf("%d",&heights[i]); // Lady heights on the lines,storing int the global array
    }

    scanf("%d",&lk); //Queries for luchus height
    while(lk--)
    {
        int q;
        scanf("%d",&q);
        if(q < heights[0])
        {
            printf("X %d\n",heights[0]);
        }
        else if(q == heights[0])
        {
            printf("X %d\n",heights[1]);
        }
        else if(q > heights[lh-1])
        {
            printf("%d X\n",heights[lh-1]);
        }
        else if(q == heights[lh-1])
        {
            printf("%d X\n",heights[lh-2]);
        }
        else
        {
            x_search(q,i);
        }

    }


    return 0;
}
