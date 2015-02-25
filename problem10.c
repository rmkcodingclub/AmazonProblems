//Solved by Kalai Arasi, Dept of CSE

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int *a;
    int *flag;
    int n,i;
    cin>>n;
    a= new int[n];
    flag = new int[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        flag[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        flag[a[i]]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(flag[i]==0)
        {
            cout<<i<<"\n";
        }
    }
    return 0;
}
