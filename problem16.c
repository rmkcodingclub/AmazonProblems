//SOlved by Supreetha M, CSE

#include<stdio.h>
int main()
{
int a[50],temp,comp=0,i,j;
printf("\n Enter the array elements");
for(i=0;i<50;i++)
scanf("%d",&a[i]);
for(i=0;i<50;i++)
for(j=i+1;j<50;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
comp=comp+1;
}
}
printf("\n The second largest element in the given array is : " , a[1]);
printf("\n The number of comparisons required are : " , comp);
return 0;
}
