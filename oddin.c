#include<stdio.h>
int main()
{
int a,i,b,temp=0;
scanf("%d %d",&a,&b);
if(a>b)
{
temp=a;
a=b;
b=temp;
}
for(i=a;i<=b;i++)
{
if(i%2==1)
{
printf("%d\t",i);
}
}
}
