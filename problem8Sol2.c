//Solved by Harish and Dhivyan, Dept of CSE

#include<stdio.h>

int FindMaxSum(int arr[], int n)
{
  int a = arr[0];
  int b = 0;
  int c;
  int i;
 
  for (i = 1; i < n; i++)
  {
    
     c = (a> b)?a: b;
     a = b + arr[i];
     b = c;
  }
 
 
   return ((a> b)? a : b);
}
 

int main()
{
  int arr[] = {5, 5, 10, 100, 10, 5};
  printf("%d \n", FindMaxSum(arr, 6));
  getchar();
  return 0;
}
