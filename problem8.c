/*
Solved by Haripriya, Dept of CSE
*/

#include<stdio.h>
int main()
{
int n,i,x1,x2,x,a[50];
printf("enter size:");
scanf("%d",&n);
printf("\n enter array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
x1=1;
x2=a[0];
for(i=2;i<=n+1;i++)
x1= x1^i;
for(i=1;i<n;i++)
x2= x2^a[i];
x= x1^x2;
printf("\n %d",x);
return 0;
}
