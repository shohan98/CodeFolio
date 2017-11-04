#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,t,n;
    string s1,s2,s3,s4;
        cin>>s1>>s2;
        scanf("%i",&n);
        cout<<s1<<" "<<s2<<endl;
        for(i=0;i<n;i++){
            cin>>s3>>s4;
            if(s1==s3){
                cout<<s4<<" "<<s2<<endl;
                s1=s4;
            }
            else{
                cout<<s1<<" "<<s4<<endl;
                s2=s4;
            }

        }
    return 0;
}
