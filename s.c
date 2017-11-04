#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tc,a[3],sum,avg,i,k,j,ter1,ter2,fin,att,temp;
    scanf("%i",&tc);

    for (k=0;k<tc;k++)
    {
        scanf("%i %i %i %i %i %i %i",&ter1,&ter2,&fin,&att,&a[0],&a[1],&a[2]);

         for(i=0;i<3;i++){
      for(j=i+1;j<3;j++){
           if(a[i]>a[j]){
               temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
      }
  }

    avg = (a[2]+a[1])/2;

    sum = ter1+ ter2 + fin + att + avg;

    if(sum>=90)
        printf("Case %d: A\n",k+1);
    else if(sum>=80)
        printf("Case %d: B\n",k+1);
    else if(sum>=70)
        printf("Case %d: C\n",k+1);
    else if(sum>=60)
        printf("Case %d: D\n",k+1);
    else if(sum<60)
        printf("Case %d: F\n",k+1);

    }

}
