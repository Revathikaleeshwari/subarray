#include<stdio.h>
int main()
{
int i,a[1000],t,j,max=0,curr;
scanf("%d",&a[i]);
for(i=0;i<t;i++)
{
curr=a[i];
for(j=i+1;j<=t;j++)
{
curr=curr+a[j];
if(curr>max)
max=curr;
}
}
printf("%d",max);
return 0;
}
