//Solved by Kalai Arasi, Dept of CSE

#include<stdio.h>
main()
{
int a[10],b[10];
int number,i,j;
a[0]=0;
a[1]=1;
a[2]=2;
a[3]=3;
a[4]=4;
a[5]=4;
a[6]=6;
a[7]=7;
a[8]=8;
a[9]=9;
for (i=0;i<10;i++)
b[i]=0;
for (i=0;i<10;i++)
{
number=i;
for (j=0;j<10;j++)
{
if(a[j]==number)
{
b[i]=1;
continue;
}
}
}
for (i=0;i<10;i++)
if(b[i]==0)
printf( "%d\n" ,i);
}
