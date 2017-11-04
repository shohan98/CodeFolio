#include<stdio.h>
int main()
{
    int a,s,d,f,g;
    while( scanf("%i",&a), a){
        scanf("%i %i",&s,&d);
        while(a--)
        {
            scanf("%i %i",&f,&g);
            if(f>s && g>d)
                printf("NE\n");
            else if(f>s && g<d)
                printf("SE\n");
            else if(f<s && g>d)
                printf("NO\n");
            else if(f<s && g<d)
                printf("SO\n");
            else
                printf("divisa\n");
        }
    }
    return 0;
}
