#include<bits/stdc++.h>

using namespace std;


int arr[123456];
int lo,hi;

int get_ind(int n){ // will return indexes
    l = 0;
    h = hi;
    if(arr[l] == n) return l;
    if(arr[h-1] == n) return h-1;

    int mid ;
    while(l < h){
        mid = ((l+h)/2) - 1;
        if(arr[mid] == n) return mid;
        else if( arr[ mid ] > n){

        }
    }


}



int main(){


    return 0;

}
