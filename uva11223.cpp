#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,m,n,t;
    map <string,string> mp;
        mp[".-"] = 'A';
    mp["-..."] ='B';
    mp["-.-."] ='C';
    mp["-.."] ='D';
    mp["."] ='E';
    mp["..-."] ='F';
    mp["--."] ='G';
    mp["...."] ='H';
    mp[".."] ='I';
    mp[".---"] ='J';
    mp["-.-"] ='K';
    mp[".-.."] ='L';
    mp["--"] ='M';
    mp["-."] ='N';
    mp["---"] ='O';
    mp[".--."] ='P';
    mp["--.-"] ='Q';
    mp[".-."] ='R';
    mp["..."] ='S';
    mp["-"] ='T';
    mp["..-"] ='U';
    mp["...-"] ='V';
    mp[".--"] ='W';
    mp["-..-"] ='X';
    mp["-.--"] ='Y';
    mp["--.."] ='Z';
    mp["-----"] ='0';
    mp[".---- "] ='1';
    mp["..---"] ='2';
    mp["...--"] ='3';
    mp["....-"] ='4';
    mp["....."] ='5';
    mp["-...."] ='6';
    mp["--..."] ='7';
    mp["---.."] ='8';
    mp["----."] ='9';
    mp[".-.-.-"] ='.';
    mp["--..--"] =',';
    mp["..--.."] ='?';
    mp[".----."] ='�';
    mp["-.-.--"] ='!';
    mp["-..-."] ='/';
    mp["-.-."] ='(';
    mp["-.--.-"] =')';
    mp[".-..."] ='&';
    mp["---..."] = ':';
    mp["-.-.-."] = ';';
    mp["-...-"] = '=';
    mp[".-.-."] = '+';
    mp["-....-"] = '-';
    mp["..--.-"] = '_';
    mp[".-..-."] = '"';
    mp[".--.-."] = '@';
    mp[" "] = ' ';
    cout<<mp[".--.-."]<<endl;
    char s[10];
    char str[2010];
    scanf("%d",&t);
    getchar();
    while(t--){
        i=0;
        gets(str);
        for(i=0,j=0;str[i];i++){
            if(str[i]!= ' '){
                s[j]=str[i];
                j++;
            }
            else{

                if(str[i-1]== ' ')
                    printf(" ");
                else
                    cout<<mp[s];
                for(j=0;s[j];j++)
                    s[j]=NULL;
                j=0;
            }

        }
        cout<<mp[s];

        printf("\n");
    }
    return 0;
}
