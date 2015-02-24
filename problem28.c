//Solved by Aishwarya M, IT 'A'
#include<stdio.h>
void main()
{
  int a[100],b[100],n,n1,i,j;
  printf("Enter the no of elements");
  scanf("%d",&n);
 printf("Enter the elements");
for(i=1;i<=n;i++)
  {
   scanf("%d",&a[i]);
  }
 for(i=1;i<=n;i++)
 {
  b[i]=0;
}
for(i=1;i<=n;i++)
{
 n1=i;
 for(j=1;j<=n;j++)
{
  if(a[j]==n1)
  {b[i]=1;
   continue;
   }
}
}
for(i=1;i<=n;i++)
{
 if(b[i]==0)
 {
  printf("%d\n",i);
  }
}
}
