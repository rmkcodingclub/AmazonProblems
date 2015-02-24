//Solved by Roselin Preethi, IT Dept.

#include<stdio.h>
main()
{
int i=5;
printf("%d",fun(fun(fun(fun( fun(i))))));
}
void fun(int i)
{
 if(i%2)
   return(i+(7*4)-(5/2)+(2*2));
 else
   return(i+(17/5)-(34/15)+(5/2));
}


OUTPUT:

0 
