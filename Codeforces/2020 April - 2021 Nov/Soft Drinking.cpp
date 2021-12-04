// https://codeforces.com/problemset/problem/151/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	cout<<min(min((k*l)/nl, c*d) , p/np) / n<<endl;
}