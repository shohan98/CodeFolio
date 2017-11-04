#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,s,d;
    while(1){
    scanf("%lli",&a);

    s=1100*(pow(100,a-1)-1);
    printf("%i\n",s);
    s=s/99+11*a+1;
    printf("%i\n",s);
    }
    return 0;
}
