//Solved by Sri Divya, CSE

#include <iostream>
using namespace std;

int missing(int a[], int len)
{
    int xor_res = 0;
    for(int i = 0; i < len; i++)
        xor_res ^= a[i] ^ (i+1);
    return xor_res ^ (len+1);
}

int main()
 {
    const int nplus1 = 13;
    int a[nplus1-1] = {4,5,3,2,8,9,10,11,7,1,12,13};
    cout <<"Missing = " << missing(a, nplus1-1)<<endl;
    return 0;
}
