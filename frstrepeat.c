#include<stdio.h>
int main()
{
int a[100],n,i,j,count=0,k=0,b=0,s[50];
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
if(a[i]!=0)
{
s[k]=a[i];
k++;
}}}}
b=count;
if(b>=1)
{
k=0;
printf("%d",s[k]);
}
if(b==0)
{
printf("unique");
}
}
