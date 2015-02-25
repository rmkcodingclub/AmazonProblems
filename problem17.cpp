/*
Solved by Vignesh M
Dept of CSE
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> inputElements;
	int n, i, xor1 = 0, xor2 = 0, temp;
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> temp;
		inputElements.push_back(temp);
		xor1 ^= i;
		xor2 ^= temp;
	}
        xor1 ^= (n + 1);
        cout << (xor1 ^ xor2);
	return 0;
}

//SOlved by Vignesh CS, CSE

#include<conio.h>

#include<iostream.h>

int main()

{

int a=0,b=0,i,n,c[10];

Cin>>n;

For(i=o;i<n;i++)

{cin>>c[i];

}

For(i=0;i<n;i++)

{

a ^=i;

b ^=c[i];

}

a ^=n;

char d=a ^ b;

cout<<d;

}
