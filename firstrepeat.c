#include<stdio.h>
int main()
{
int n,j,a[100],temp=0,count=0,i,b=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count=count+1;
}
}

}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}}
b=count;
for(i=0;i<(n-count);i++)
{
printf("%d\t",a[i]);
}
}
