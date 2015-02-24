//Solved by
//Aishwarya.J
//IIIrd yr,IT A.

#include<stdio.h>
main()
{
int i,j,a[10],flag;
printf("Enter the total number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("Enter the input string");
for(j=0;j<n;j++)
{
	scanf("%d",&a[j]);
}
while((a[i]&&a[j])<n)
{
if(a[i]==a[j])
{
flag=1;
i++;
j++;
}
else
{
flag++;
printf("%d",a[i]);
}
}
}
