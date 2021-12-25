#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll n;
	cin>>n;
	cout<< 2*3* (ll)pow(4, n-2) + 3*3*(n-3)*(ll)pow(4, n-3)<<endl;	
}