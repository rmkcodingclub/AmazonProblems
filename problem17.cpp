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
