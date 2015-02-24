/*
Solved by 
Monicka, IT Dept.
*/

#include<stdio.h>
main()
{
int a[8][10],c=0,i,j;
for(i=0;i<10;i++)
for(j=0;j<8;j++)
a[j][i]=c++;
printf("%d",a[3][6]);
}

output:51
