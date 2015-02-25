//By T.Poovarasan , ECE

#include<stdio.h>
 
/*Function to return max sum such that no two elements
 are adjacent */
int FindMaxSum(int arr[], int n)
{
  int incl = arr[0];
  int excl = 0;
  int excl_new;
  int i;
 
  for (i = 1; i < n; i++)
  {
     /* current max excluding i */
     excl_new = (incl > excl)? incl: excl;
 
     /* current max including i */
     incl = excl + arr[i];
     excl = excl_new;
  }
 
   /* return max of incl and excl */
   return ((incl > excl)? incl : excl);
}
 
/* Driver program to test above function */
int main()
{
  int arr[] = {5, 5, 10, 100, 10, 5};
  printf("%d \n", FindMaxSum(arr, 6));
  getchar();
  return 0;
}
//Time Complexity: O(n)

//By Nandha Kumar, ECE
#include<stdio.h>

int FindMaxSum(int arr[], int n)

{

int incl = arr[0];

int excl = 0;

int exclnew;

int i;

for (i = 1; i < n; i++)

{

exclnew = (incl > excl)? incl: excl;

incl = excl + arr[i];

excl = exclnew;

}

return ((incl > excl)? incl : excl);

}

int main()

{

int arr[] = {5, 5, 10, 100, 10, 5};

printf("%d \n", FindMaxSum(arr, 6));

getchar();

return 0;

}

//how the program works

arr[] = {5, 5, 10, 40, 50, 35}

inc = 5

exc = 0

For i = 1 (current element is 5)

incl = (excl + arr[i]) = 5

excl = max(5, 0) = 5

For i = 2 (current element is 10)

incl = (excl + arr[i]) = 15

excl = max(5, 5) = 5

For i = 3 (current element is 40)

incl = (excl + arr[i]) = 45

excl = max(5, 15) = 15

For i = 4 (current element is 50)

incl = (excl + arr[i]) = 65

excl = max(45, 15) = 45

For i = 5 (current element is 35)

incl = (excl + arr[i]) = 80

excl = max(5, 15) = 65

And 35 is the last element. So, answer is max(incl, excl) = 80

