#include<bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}


//easier for me. also more efficient since no stack overhead 'pera' 
long long binpow2(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) 		//even, odd check
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}


// a*b mod m = a mod m * b mod m
// x^[n mod (m−1)]  instead of x^n if m is a prime [little fermat's theorem]
long long bigmod(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main()
{
	int t=1;
	// cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		cout<<binpow(a,b)<<endl;
		cout<<binpow2(a,b)<<endl;
		cout<<bigmod(3,513,9)<<endl;
		cout<<bigmod(3,513%4,5)<<endl;
	}	
}