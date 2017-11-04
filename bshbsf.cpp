#include<bits/stdc++.h>

using namespace std;

void f(int n)
{
    if(n == 5)return;
    printf("%d\n",n);
    f(n+1);
    printf("%d\n",n);
}

int main()
{
    int n = 1;
    f(n);
}
