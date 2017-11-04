#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

long kase,i,j,counter,T=0;
char s1[151],s2[151];
long k1[50],k2[50];

int check()
{
    for(int ii=0; ii<=26; ii++)
    {
        if(k1[ii] != k2[ii])
            return 0;
        else
            return 1;
    }
}



int main()
{

    scanf("%ld",&kase);
    getchar();

    while(kase--)
    {
        gets(s1);
        gets(s2);

        memset(k1,0,sizeof(k1));
        memset(k2,0,sizeof(k2));


        int len1 = strlen(s1);
        int len2 = strlen(s2);


            for(i=0; i<len2; i++)
            {
                if(s1[i] >= 'A' && s1[i] <= 'Z')
                {
                    s1[i] = s2[i]+32;
                }
                if(s2[i] >= 'A' && s2[i] <= 'Z')
                {
                    s2[i] = s2[i]+32;
                }

                if(s1[i] >= 'a' && s1[i] <= 'z')
                {
                    k1[s1[i]-'a']++;
                }

                if(s2[i] >= 'a' && s2[i] <= 'z')
                {
                    k2[s2[i]-'a']++;
                }

            }

        int x = check();

        if(x != 0)
        {
            printf("Case %ld: Yes\n",++T);
        }
        else
        {
            printf("Case %ld: No\n",++T);
        }

    }


    return 0;
}

