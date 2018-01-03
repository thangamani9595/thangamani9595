#include<stdio.h>
int main()
{
char a[20];int n=20,i;
for(i=0;i<n;i++)
{
scanf("%c",&a[i]);
}
for(i=n-1;i<=0;i--)
{
printf("%c",a[i]);
}
}
