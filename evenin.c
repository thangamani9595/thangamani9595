#include<stdio.h>
int main()
{
int a,b,temp=0,i;
scanf("%d %d",&a,&b);
if(a>b)
{
temp=a;
a=b;
b=temp;
}
for(i=a;i<=b;i++)
{
if(i%2==0)
{
printf("%d\t",i);
}
}
}
