//Solution by Abhi, CSE

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
char *a;
int i,j,c,flag=0,size;
cout<<"ENTER THE SIZE:- ";
cin>>c;
a=new char[c];
cout<<"\n ENTER THE STRING:- ";
for(j=0;j<c;j++)
cin>>a[j];
size=c-3;
if((a[0]=='b')||(a[0]=='B'))
{
for(i=c;i>=size;i--)
{
if(isalpha(a[i]))
{
continue;
}
else
{
cout<<"\nin the else loop";
flag=1;
break;
}
}
}
else
{
flag=2;
}
if(flag==0)
{
cout<<"\nTHE GIVEN  STRING STARTS WITH 'B' AND ENDS WITH 3 CHRACTERS\n";
}
else if(flag==1)
{
cout<<"\nTHE GIVEN STRING STARTS WITH 'B' BUT IT DOESNOT END WITH THREE CHRACTERS\n";
}
 
else if(flag==2)
{
cout<<"\nTHE GIVEN STRING DOESNOT START WITH 'B'\n";
}
return 0;
}
