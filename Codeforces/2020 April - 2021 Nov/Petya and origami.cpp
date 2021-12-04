// https://codeforces.com/problemset/problem/1080/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int n,k;
	cin>>n>>k;
	cout<< int(ceil(2.0*n / k) + ceil(5.0*n / k) + ceil(8.0*n / k))<<endl;
}