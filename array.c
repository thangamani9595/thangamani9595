#include<stdio.h>
int main()
{
int n[100],k,sum=0,i,a;
scanf("%d %d",&a,&k);

for(i=0;i<a;i++)
{
scanf("%d",&n[i]);
}
for(i=0;i<k;i++)
{
sum=sum+n[i];
}
printf("%d",sum);
}
