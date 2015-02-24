//Here is the solution for Amazon Problem No. 2
//Solved by M.Anandha Vignesh,CSE

#include<stdio.h>
void main()
{
  int i,n,temp;
  int a[20];
  int flag[20];
  for(i=1;i<=n;i++)
  {
    flag[i]=0;
  }
  printf("enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter the numbers one by one\n");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&temp);
    a[i]=temp;
  }
  for(i=1;i<=n;i++)
  {
    flag[a[i]]+=1;
  }
  printf("the element not in the array are:");
  for(i=1;i<=n;i++)
  {
    if(flag[i]==1)
    printf("\n%d",i);
  }
}
