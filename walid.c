#include<stdio.h>
int main()
{
int i,n,a[100],j,temp;
printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++)
{
j=i;
while(j>0 && a[j]<a[j-1])
{
temp=a[j];
a[j]=a[j-1];
a[j-1]=temp;
j--;
}
}
printf("The sorted array is:");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}
