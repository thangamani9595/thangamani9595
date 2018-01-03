#include<stdio.h>
int main()
{
int a,b,i,j,count=0,temp=0;
scanf("%d%d",&a,&b);
if(a>b)
{
temp=a;
a=b;
b=a;
}
for(i=a;i<=b;i++)
{
for(j=2;j<a;j++)
{
if(i%j==0)
{
count=count+1;
}
}
}
printf("%d",count);
}
